#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>

struct Control {
    int id;
    std::string type;
    std::string state;

    // Overload the equality operator to compare Control objects
    bool operator==(const Control& other) const {
        return id == other.id && type == other.type && state == other.state;
    }
};

// Function to print the state of all controls
void printControls(const std::vector<Control>& controls) {
    for (const auto& ctrl : controls) {
        std::cout << "ID: " << ctrl.id << ", Type: " << ctrl.type << ", State: " << ctrl.state << '\n';
    }
}

int main() {
    // Initialize controls
    std::vector<Control> controls = {
        {1, "slider", "visible"},
        {2, "button", "visible"},
        {3, "slider", "invisible"},
        {4, "button", "disabled"},
        {5, "slider", "visible"},
        {6, "button", "invisible"},
        {7, "slider", "disabled"},
        {8, "button", "visible"}
    };

    std::cout << "Original Controls:\n";
    printControls(controls);
    std::cout << "\n";

    // Step 1: Use std::copy to create a backup of the control list
    std::vector<Control> backupControls;
    std::copy(controls.begin(), controls.end(), std::back_inserter(backupControls));

    std::cout << "Backup of Original Controls:\n";
    printControls(backupControls);
    std::cout << "\n";

    // Step 2: Use std::fill to set all states to "disabled" temporarily
    std::fill(controls.begin(), controls.end(), Control{ 0, "", "disabled" });
    std::cout << "After std::fill (All states set to 'disabled'):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 3: Use std::generate to generate random states ("visible", "invisible", "disabled") for testing
    std::srand(std::time(0));  // Seed for randomness
    std::generate(controls.begin(), controls.end(), []() {
        std::vector<std::string> states = { "visible", "invisible", "disabled" };
        return Control{ 0, "", states[std::rand() % 3] };  // Randomly assign a state
        });

    std::cout << "After std::generate (Random states):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 4: Use std::transform to change the state of all sliders to "invisible"
    std::transform(controls.begin(), controls.end(), controls.begin(), [](Control& ctrl) {
        if (ctrl.type == "slider") {
            ctrl.state = "invisible";  // Change all sliders' states to "invisible"
        }
        return ctrl;
        });

    std::cout << "After std::transform (All sliders set to 'invisible'):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 5: Use std::replace to replace "disabled" with "enabled" for testing
    std::replace_if(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.state == "disabled";
        }, Control{ 0, "", "enabled" });

    std::cout << "After std::replace (All 'disabled' replaced with 'enabled'):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 6: Use std::remove_if to filter out invisible controls
    controls.erase(std::remove_if(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.state == "invisible";  // Remove invisible controls
        }), controls.end());

    std::cout << "After std::remove_if (Invisible controls removed):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 7: Use std::reverse to reverse the control order
    std::reverse(controls.begin(), controls.end());

    std::cout << "After std::reverse (Control order reversed):\n";
    printControls(controls);
    std::cout << "\n";

    // Step 8: Use std::partition to group visible controls together
    auto partitionIt = std::partition(controls.begin(), controls.end(), [](const Control& ctrl) {
        return ctrl.state == "visible";  // Partition into visible and non-visible controls
        });

    std::cout << "After std::partition (Visible controls grouped together):\n";
    printControls(controls);
    std::cout << "\n";

    return 0;
}
