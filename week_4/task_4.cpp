#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <set>

struct Control {
    int id;
    std::string type;
    std::string state;

    // Overload the equality operator to compare Control objects
    bool operator==(const Control& other) const {
        return id == other.id && type == other.type && state == other.state;
    }

    // Define comparison for sorting
    bool operator<(const Control& other) const {
        return id < other.id;
    }
};

// Function to print the state of all controls
void printControls(const std::vector<Control>& controls) {
    for (const auto& ctrl : controls) {
        std::cout << "ID: " << ctrl.id << ", Type: " << ctrl.type << ", State: " << ctrl.state << '\n';
    }
}

int main() {
    // Initialize controls for two lists
    std::vector<Control> list1 = {
        {1, "slider", "visible"},
        {3, "button", "invisible"},
        {5, "slider", "disabled"},
        {7, "button", "visible"}
    };

    std::vector<Control> list2 = {
        {2, "slider", "visible"},
        {4, "button", "disabled"},
        {6, "slider", "invisible"},
        {8, "button", "disabled"}
    };

    // 1. Sorting: Sort the controls by their ID using std::sort
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());

    std::cout << "Sorted list1:\n";
    printControls(list1);
    std::cout << "Sorted list2:\n";
    printControls(list2);
    std::cout << "\n";

    // 2. Binary Search: Search for a control by ID using std::lower_bound and std::upper_bound
    int searchId = 4;
    auto lower = std::lower_bound(list1.begin(), list1.end(), Control{ searchId, "", "" });
    auto upper = std::upper_bound(list1.begin(), list1.end(), Control{ searchId, "", "" });

    if (lower != list1.end() && lower->id == searchId) {
        std::cout << "Found Control with ID " << searchId << ": Type: " << lower->type << ", State: " << lower->state << "\n";
    }
    else {
        std::cout << "Control with ID " << searchId << " not found in list1.\n";
    }

    // 3. Merging: Merge two sorted lists using std::merge
    std::vector<Control> mergedList;
    std::merge(list1.begin(), list1.end(), list2.begin(), list2.end(), std::back_inserter(mergedList));

    std::cout << "Merged list:\n";
    printControls(mergedList);
    std::cout << "\n";

    // 4. In-place merging: Use std::inplace_merge to combine controls in the same list
    list1.insert(list1.end(), list2.begin(), list2.end());  // Append list2 to list1
    std::inplace_merge(list1.begin(), list1.begin() + list2.size(), list1.end());

    std::cout << "List after inplace_merge:\n";
    printControls(list1);
    std::cout << "\n";

    // 5. Set Operations: Use std::set_union and std::set_intersection to identify common and unique controls
    std::set<Control> set1(list1.begin(), list1.end());
    std::set<Control> set2(list2.begin(), list2.end());
    std::vector<Control> unionList, intersectionList;

    // Union: Find all unique controls from both sets
    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::back_inserter(unionList));

    std::cout << "Union of set1 and set2:\n";
    printControls(unionList);
    std::cout << "\n";

    // Intersection: Find common controls between both sets
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::back_inserter(intersectionList));

    std::cout << "Intersection of set1 and set2:\n";
    printControls(intersectionList);
    std::cout << "\n";

    return 0;
}
