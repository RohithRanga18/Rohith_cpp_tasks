HMI System Design and STL Algorithms
Week 3: HMI System Design
Objectives:
Menu Navigation System: Implement a hierarchical menu navigation system.
Vehicle Data Display: Simulate real-time vehicle data display.
Touchscreen Event Handling: Implement event-driven handling of touchscreen interactions.
Skin Customization: Create a skin customization system for theme management.
Task 1: Build a Menu Navigation System
Description: Implement a hierarchical menu structure using classes and data structures.

Features:
Navigate through menu levels (up, down, enter, back).
Display current menu options.
Keyboard-based navigation.
Task 2: Simulate an Instrument Cluster Data Display
Description: Simulate a data display for vehicle parameters (speed, fuel level, engine temperature).

Features:
Class-based design for vehicle data.
Real-time updates for parameters.
Warnings for parameter thresholds.
Task 3: Event Handling System for Touchscreen Input
Description: Simulate an event-driven system to process touchscreen events.

Features:
Event class to represent user interactions.
Event queue for managing multiple events.
Process and handle events like Tap, Swipe.
Task 4: HMI Skin Customization System
Description: Manage and apply different themes for an HMI display.

Features:
Theme class to store attributes (colors, fonts).
Multiple themes managed with std::map.
User interface for theme selection and preview.
Week 4: STL Algorithms & Design Patterns
Objectives:
STL Algorithms: Use STL algorithms to manipulate HMI control states.
Container Operations: Practice container iteration, searching, sorting, and merging.
Advanced Operations: Use advanced STL features like transformations and conditional modifications.
Design Patterns: Implement Singleton, Factory, Observer, and Strategy design patterns in an HMI context.
Task 1: Working with STL Algorithms
Goal: Practice using STL algorithms to manage HMI control states (e.g., button visibility, slider values).

Description: Create a Control struct with an ID, type, and state, and use STL algorithms to:
Iterate through controls.
Find specific controls by ID or state.
Count controls with specific states.
Compare subranges.
Key Operations:

std::for_each, std::find, std::find_if, std::adjacent_find, std::count, std::count_if, std::equal.
Task 2: Iterating Through Containers and Finding Elements
Goal: Practice iterating through containers and finding specific elements in the context of widgets.

Description: Use std::vector for dynamic widgets and std::set for static widgets, and perform operations like:
Print dynamic widgets with iterators.
Find specific widgets in the containers.
Combine containers and search for a widget.
Key Operations:

Iteration with iterators, std::set::find, std::copy, std::find.
Task 3: Advanced STL Operations
Goal: Perform advanced STL operations such as transformations and conditional modifications on control states.

Description: Manipulate control states and perform list operations:
Backup the control list using std::copy.
Set all states to "disabled" with std::fill.
Apply transformations (e.g., change slider states to "invisible").
Filter out invisible controls using std::remove_if.
Reverse, partition, and modify control lists.
Key Operations:

std::copy, std::fill, std::generate, std::transform, std::replace, std::remove_if, std::reverse, std::partition.
Task 4: Sorting, Searching, and Merging
Goal: Practice sorting, searching, and merging containers for efficient HMI management.

Description:
Sort controls by ID using std::sort.
Use binary search with std::lower_bound and std::upper_bound.
Merge sorted lists using std::merge and std::inplace_merge.
Use set operations to find common and unique controls.
Key Operations:

std::sort, std::stable_sort, std::lower_bound, std::upper_bound, std::merge, std::inplace_merge, std::set_union, std::set_intersection.
Task 5: Implementing Design Patterns in HMI
Goal: Implement and understand the Singleton, Factory, Observer, and Strategy design patterns.

Description:
Singleton Pattern: Ensure only one instance of HMISystem.
Factory Pattern: Create controls (buttons, sliders).
Observer Pattern: Notify widgets on mode changes (e.g., Day/Night).
Strategy Pattern: Define different rendering behaviors (2D/3D).
Key Patterns:

Singleton, Factory, Observer, Strategy.
Requirements
C++11 or higher.
A C++ compiler (e.g., g++, clang++).
Standard C++ library headers: <iostream>, <map>, <string>, <vector>, <thread>, <queue>, <random>, <chrono>.
