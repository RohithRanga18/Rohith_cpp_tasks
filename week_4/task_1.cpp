#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Control {
    int id;               // Unique ID
    std::string type;     // "button" or "slider"
    std::string state;    // "visible", "invisible", "disabled"

    // Overload the equality operator to compare Control objects
    bool operator==(const Control& other) const {
        return id == other.id && type == other.type && state == other.state;
    }
};

int main() {
    // Initialize the controls with three possible states: "visible", "invisible", "disabled"
    std::vector<Control> controls = {
        {1, "button", "visible"},
        {2, "slider", "invisible"},
        {3, "button", "disabled"},
        {4, "slider", "visible"},
        {5, "button", "visible"},
        {6, "slider", "disabled"},
        {7, "button", "invisible"},
        {8, "slider", "visible"},
        {9, "button", "visible"},
        {10, "slider", "invisible"}
    };

    // 1. Using std::for_each to print all control details
    std::cout << "All Control States:\n";
    std::for_each(controls.begin(), controls.end(), [](const Control& ctrl) {
        std::cout << "ID: " << ctrl.id << ", Type: " << ctrl.type << ", State: " << ctrl.state << '\n';
        });

    // 2. Using std::find to find a control by a specific ID
    int searchId = 3;
    auto it = std::find_if(controls.begin(), controls.end(), [searchId](const Control& ctrl) {
        return ctrl.id == searchId;
        });
    if (it != controls.end()) {
        std::cout << "\nControl with ID " << searchId << ": Type: " << it->type << ", State: " << it->state << '\n';
    }
    else {
        std::cout << "\nControl with ID " << searchId << " not found.\n";
    }

    // 3. Using std::find_if to find the first invisible control
    auto invisibleControl = std::find_if(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.state == "invisible";
        });
    if (invisibleControl != controls.end()) {
        std::cout << "\nFirst Invisible Control: ID: " << invisibleControl->id
            << ", Type: " << invisibleControl->type << ", State: " << invisibleControl->state << '\n';
    }
    else {
        std::cout << "\nNo invisible controls found.\n";
    }

    // 4. Using std::adjacent_find to check for consecutive controls with the same state
    auto adjacentIt = std::adjacent_find(controls.begin(), controls.end(), [](const Control& a, const Control& b) {
        return a.state == b.state;  // Condition to check for consecutive controls with the same state
        });

    if (adjacentIt != controls.end()) {
        std::cout << "\nFound adjacent controls with the same state: \n";
        std::cout << "ID: " << adjacentIt->id << " (State: " << adjacentIt->state << ")\n";
        std::cout << "ID: " << (adjacentIt + 1)->id << " (State: " << (adjacentIt + 1)->state << ")\n";
    }
    else {
        std::cout << "\nNo adjacent controls with the same state.\n";
    }

    // 5. Using std::count to count the number of visible controls
    int visibleCount = std::count_if(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.state == "visible";
        });
    std::cout << "\nNumber of visible controls: " << visibleCount << '\n';

    // 6. Using std::count_if to count the number of disabled sliders
    int disabledSlidersCount = std::count_if(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.type == "slider" && ctrl.state == "disabled";  // Count only sliders that are disabled
        });
    std::cout << "Number of disabled sliders: " << disabledSlidersCount << '\n';

    // 7. Using std::equal to compare two subranges of controls to check if they are identical
    std::vector<Control> controlsToCompare = {
        {1, "button", "visible"},
        {2, "slider", "invisible"},
        {3, "button", "disabled"}
    };

    // Compare the first 3 controls from 'controls' with 'controlsToCompare'
    bool areEqual = std::equal(controls.begin(), controls.begin() + 3, controls.begin()+7);
    std::cout << "\nAre the first three controls equal to the provided subrange? "
        << (areEqual ? "Yes" : "No") << '\n';

    

    return 0;
}
