## Week-3
## Objectives
 
The primary objectives of this project are:
1. To build a hierarchical menu navigation system.
2. To simulate real-time vehicle data display.
3. To implement an event handling system for touchscreen interactions.
4. To create a skin customization system for theme management.
 
## Tasks
 
### Task 1: Build a Menu Navigation System
- **Description**: Implements a hierarchical menu structure using classes and data structures.
- **Features**:
  - Navigate through menu levels (up, down, enter, back).
  - Display current menu options on the console.
  - Keyboard-based interaction for navigation.
 
### Task 2: Simulate an Instrument Cluster Data Display
- **Description**: Creates a simplified data display system to show vehicle parameters.
- **Features**:
  - Class-based design for vehicle data management.
  - Real-time updates for speed, fuel level, and engine temperature.
  - Display warnings for parameter thresholds.
 
### Task 3: Event Handling System for Touchscreen Input
- **Description**: Simulates an event-driven system for processing touchscreen inputs.
- **Features**:
  - Event class to represent user interactions.
  - Event queue for managing multiple events.
  - Processing and handling specific events (Tap, Swipe).
 
### Task 4: HMI Skin Customization System
- **Description**: Manages different themes or skins for an HMI display.
- **Features**:
  - Theme class to store attributes like colors and font size.
  - Multiple themes stored using `std::map`.
  - User interface for theme selection and preview.
 
## Requirements
 
- C++11 or higher
- A C++ compiler (e.g., g++, clang++)
- Standard library headers: `<iostream>`, `<map>`, `<string>`, `<vector>`, `<thread>`, `<queue>`, `<random>`, `<chrono>`
 
## Usage
 
To run the programs, compile each source file separately and execute the generated binaries. Below is an example command:
 
```bash
g++ -o menu_navigation menu_navigation.cpp
./menu_navigation

## week-4

HMI System Design and STL Algorithms
## Task 1: Working with STL Algorithms
Goal:
To practice commonly used STL algorithms in the context of managing HMI control states, such as button visibility, slider values, and more.

Description:
This task involves the creation of a struct Control which includes an ID, type, and state (e.g., visible, invisible, disabled). Several STL algorithms are used to:

Iterate through all controls.
Find a specific control by ID.
Find the first "invisible" control.
Check for consecutive controls with the same state.
Count the number of visible controls.
Count sliders that are disabled.
Compare subranges to check for equality.
Key Operations:
std::for_each
std::find
std::find_if
std::adjacent_find
std::count
std::count_if
std::equal
## Task 2: Iterating Through Containers and Finding Elements
Goal:
To practice iterating through containers and retrieving specific elements, focusing on widgets in an HMI system.

Description:
This task involves working with two main containers:

A std::vector<std::string> for dynamic widgets (e.g., "Speedometer", "Tachometer").
A std::set<std::string> for static widgets (e.g., "Logo", "WarningLights").
Key operations include:

Printing all dynamic widgets using an iterator.
Checking if a specific widget (e.g., "WarningLights") is present in the std::set.
Combining the two containers into a single std::vector and finding specific widgets.
Key Operations:
Iteration with iterators.
std::set::find
std::copy
std::find
## Task 3: Advanced STL Operations
Goal:
To perform advanced STL operations, such as transformations and conditional modifications, on HMI control states.

Description:
This task focuses on manipulating control states (e.g., making sliders invisible during night mode) and performing various operations on control lists:

Create a backup of the control list using std::copy.
Temporarily set all control states to "disabled" using std::fill.
Randomly generate control states using std::generate.
Apply transformations such as changing the state of sliders to "invisible" with std::transform.
Replace states using std::replace.
Filter out invisible controls with std::remove_if.
Reverse the control list with std::reverse.
Partition controls into visible and invisible groups using std::partition.
Key Operations:
std::copy
std::fill
std::generate
std::transform
std::replace
std::remove_if
std::reverse
std::partition
## Task 4: Sorting, Searching, and Merging
Goal:
To practice sorting, searching, and merging containers, particularly in the context of HMI controls.

Description:
In this task, two lists of controls are merged and sorted for efficient access:

Sort controls by ID using std::sort.
Use std::stable_sort to maintain relative order for controls with equal IDs.
Perform binary search using std::lower_bound and std::upper_bound.
Merge two sorted lists using std::merge.
Combine parts of the same list using std::inplace_merge.
Use set operations to find unique and common controls between two sets.
Key Operations:
std::sort
std::stable_sort
Binary Search (std::lower_bound, std::upper_bound)
std::merge
std::inplace_merge
Set Operations (std::set_union, std::set_intersection)
## Task 5: Implementing Design Patterns in HMI
Goal:
To implement and understand the Singleton, Factory, Observer, and Strategy design patterns in the context of an HMI system.

Description:
This task demonstrates the use of several design patterns in HMI system management:

Singleton Pattern: Ensures only one instance of the HMISystem class manages the overall HMI state.
Factory Pattern: Creates different types of controls (e.g., buttons, sliders).
Observer Pattern: Notifies widgets when the system switches modes (e.g., Day/Night mode).
Strategy Pattern: Defines different rendering behaviors (e.g., 2D vs. 3D rendering).
Key Patterns:
Singleton
Factory
Observer
Strategy
