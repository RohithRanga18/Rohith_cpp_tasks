HMI Simulation System
This project implements a Human-Machine Interface (HMI) simulation system in C++. It includes multiple components such as a menu navigation system, vehicle data display, event handling system for touchscreen input, skin customization, and advanced C++ features like STL algorithms and design patterns. Each component simulates functionalities commonly found in automotive HMI systems.

Objectives
The primary objectives of this project are:

To build a hierarchical menu navigation system.
To simulate real-time vehicle data display.
To implement an event handling system for touchscreen interactions.
To create a skin customization system for theme management.
To practice using STL algorithms in the context of managing HMI control states.
To implement and understand design patterns like Singleton, Factory, Observer, and Strategy in the context of HMI systems.
Tasks
Week 3: HMI System Design
Task 1: Build a Menu Navigation System
Description: This task implements a hierarchical menu structure using classes and data structures. It allows navigation through various menu levels, with options to go up, down, enter a submenu, or go back to the previous menu.

Features:

Navigate through multiple menu levels.
Display current menu options.
Keyboard-based interaction to simulate user navigation.
Task 2: Simulate an Instrument Cluster Data Display
Description: This task simulates a real-time vehicle data display that shows parameters like speed, fuel level, and engine temperature.

Features:

Class-based design to manage vehicle data.
Real-time updates for key vehicle parameters.
Display warnings when certain thresholds are exceeded (e.g., low fuel or high engine temperature).
Task 3: Event Handling System for Touchscreen Input
Description: This task simulates an event-driven system for processing touchscreen events such as taps and swipes.

Features:

Event class that represents different user interactions.
Event queue to manage multiple input events.
Handle touchscreen events like tap or swipe with appropriate responses.
Task 4: HMI Skin Customization System
Description: This task manages different themes or skins for the HMI display, allowing the user to select and preview different themes.

Features:

Theme class to store attributes like colors, fonts, and sizes.
Store multiple themes using std::map.
User interface to allow theme selection and previewing.
Week 4: STL Algorithms & Design Patterns
Task 1: Working with STL Algorithms
Goal: Practice using commonly used STL algorithms in managing HMI control states, such as button visibility and slider values.

Scenario: The HMI dashboard contains buttons and sliders, each with a unique ID and state (visible, invisible, or disabled). This task focuses on applying STL algorithms to manage and analyze control states.

Steps:

Define a data structure for controls (e.g., buttons and sliders).
Use various STL algorithms to:
Iterate through controls and display their details.
Find specific controls by ID.
Identify the first invisible control.
Count the number of visible controls or sliders that are disabled.
Check for consecutive controls with the same state.
Outcome: The task helps in understanding how to manipulate and query data in containers using STL algorithms.

Task 2: Iterating Through Containers and Finding Elements
Goal: Practice iterating through containers and retrieving specific elements in an HMI context.

Scenario: The HMI has two main types of widgets: dynamic widgets (e.g., speedometer, tachometer) stored in a std::vector, and static widgets (e.g., logo, warning lights) stored in a std::set.

Steps:

Populate the containers with dynamic and static widgets.
Use iterators to print all dynamic widgets.
Check if a specific widget (e.g., "WarningLights") is in the std::set.
Combine both containers into a single list and search for specific widgets.
Outcome: This task helps in understanding container traversal and element lookup using STL iterators and functions.

Task 3: Advanced STL Operations
Goal: Perform advanced STL operations such as transformations and conditional modifications on HMI control states.

Scenario: Based on certain conditions (e.g., night mode), the system needs to modify control states (e.g., hide sliders, disable controls).

Steps:

Backup the control list using std::copy.
Temporarily disable all controls using std::fill.
Generate random control states using std::generate.
Apply transformations like making sliders invisible using std::transform.
Replace control states (e.g., from "disabled" to "enabled").
Filter out invisible controls with std::remove_if.
Outcome: The task demonstrates advanced techniques for manipulating collections and modifying elements based on conditions.

Task 4: Sorting, Searching, and Merging
Goal: Practice sorting, searching, and merging containers in an HMI context.

Scenario: To enhance the system’s performance, the system needs to merge two lists of controls and efficiently access them.

Steps:

Sort the controls by their ID using std::sort.
Use binary search (std::lower_bound and std::upper_bound) to find specific controls.
Merge two sorted lists of controls using std::merge.
Use set operations (e.g., std::set_union and std::set_intersection) to identify unique and common controls.
Outcome: This task demonstrates how to efficiently manage collections of elements and optimize search and merge operations using STL.

Task 5: Implementing Design Patterns in HMI
Goal: Implement and understand the Singleton, Factory, Observer, and Strategy design patterns in the context of an HMI system.

Steps:

Singleton: Implement the HMISystem class as a singleton to manage the overall HMI state, ensuring that only one instance exists.
Factory: Create a factory for generating different types of controls (e.g., buttons, sliders, etc.).
Observer: Implement the observer pattern to notify widgets when the system switches between different modes (e.g., day mode and night mode).
Strategy: Use the strategy pattern to define different rendering behaviors (e.g., 2D rendering vs 3D rendering) that can be switched dynamically.
Outcome: This task demonstrates how to apply design patterns to create flexible and maintainable software for HMI systems.

Requirements
C++11 or higher
A C++ compiler (e.g., g++, clang++)
Standard library headers: <iostream>, <map>, <string>, <vector>, <thread>, <queue>, <random>, <chrono>
