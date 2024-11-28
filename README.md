# HMI Simulation System

This repository contains an HMI (Human-Machine Interface) simulation system designed to practice various C++ features, including STL algorithms, container manipulations, advanced operations, sorting, searching, and implementing design patterns in the context of automotive or device-based HMIs.

## Table of Contents

- [Objectives](#objectives)
- [Tasks](#tasks)
  - [Task 1: Working with STL Algorithms](#task-1-working-with-stl-algorithms)
  - [Task 2: Iterating Through Containers and Finding Elements](#task-2-iterating-through-containers-and-finding-elements)
  - [Task 3: Advanced STL Operations](#task-3-advanced-stl-operations)
  - [Task 4: Sorting, Searching, and Merging](#task-4-sorting-searching-and-merging)
  - [Task 5: Implementing Design Patterns in HMI](#task-5-implementing-design-patterns-in-hmi)
- [Requirements](#requirements)
- [Usage](#usage)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)

## Objectives

The primary objectives of this project are to:
1. Practice commonly used STL algorithms for managing HMI control states (e.g., button visibility, slider values).
2. Master container manipulations and retrieval of elements using iterators and algorithms.
3. Implement advanced STL operations, including transformations and conditional modifications.
4. Practice sorting, searching, and merging in the context of HMI control data.
5. Implement design patterns (Singleton, Factory, Observer, Strategy) in an HMI simulation system.

## Tasks

### Task 1: Working with STL Algorithms
- **Goal**: Practice using commonly used STL algorithms to manage HMI control states such as button visibility and slider values.
- **Scenario**: Imagine an HMI dashboard with buttons and sliders, each control having a unique ID and state (visible, invisible, disabled).
- **Steps**:
  1. Define a `Control` structure to represent each control.
  2. Initialize a `std::vector<Control>` with 5 buttons and 5 sliders.
  3. Use various STL algorithms to:
     - `std::for_each`: Iterate through all controls and print their details.
     - `std::find`: Find a control with a specific ID.
     - `std::find_if`: Find the first control that is invisible.
     - `std::adjacent_find`: Find consecutive controls with the same state.
     - `std::count`: Count the number of visible controls.
     - `std::count_if`: Count the number of disabled sliders.
     - `std::equal`: Compare two subranges of controls to check if they are identical.

  **Output Results**:
  Print the results of each algorithm in a user-friendly format, such as displaying the count of visible controls or finding the first invisible control.

### Task 2: Iterating Through Containers and Finding Elements
- **Goal**: Practice iterating through containers and retrieving specific elements.
- **Scenario**: The HMI screen contains dynamic and static widgets, where dynamic widgets are stored in a `std::vector`, and static widgets are stored in a `std::set`.
- **Steps**:
  1. Populate the containers:
     - `std::vector<std::string>` for dynamic widgets (`"Speedometer"`, `"Tachometer"`, etc.).
     - `std::set<std::string>` for static widgets (`"Logo"`, `"WarningLights"`, etc.).
  2. Use iterators to print all dynamic widgets.
  3. Use `std::set::find` to check if a specific widget (e.g., `"WarningLights"`) is in the set.
  4. Combine both containers into a `std::vector` using `std::copy`.
  5. Use `std::find` to locate a specific widget in the combined container.

  **Output Results**:
  Print the list of dynamic widgets and show the result of searching for a specific widget in the set.

### Task 3: Advanced STL Operations
- **Goal**: Perform advanced operations such as transformations and conditional modifications on HMI control states.
- **Scenario**: Modify HMI control states based on conditions (e.g., hide all sliders during night mode).
- **Steps**:
  1. Use `std::copy` to create a backup of the control list.
  2. Use `std::fill` to temporarily set all controls to "disabled".
  3. Use `std::generate` to randomly generate control states.
  4. Apply transformations:
     - `std::transform`: Change all sliders to "invisible".
     - `std::replace`: Replace "disabled" with "enabled".
     - `std::remove_if`: Filter out invisible controls from the list.
  5. Other operations:
     - `std::reverse`: Reverse the control order for debugging.
     - `std::partition`: Group visible controls together.

  **Output Results**:
  Show intermediate results after each operation, including the final list of controls.

### Task 4: Sorting, Searching, and Merging
- **Goal**: Practice sorting, searching, and merging in the context of HMI control data.
- **Scenario**: Merge two sorted lists of controls into a single sorted list for efficient access and perform operations like searching.
- **Steps**:
  1. **Sorting**: Sort controls by their ID using `std::sort`.
  2. **Binary Search**: Search for a control by ID using `std::lower_bound` and `std::upper_bound`.
  3. **Merging**: Merge two sorted lists using `std::merge`.
  4. **Set Operations**: Use `std::set_union` and `std::set_intersection` to identify common and unique controls.

### Task 5: Implementing Design Patterns in HMI
- **Goal**: Implement and understand the Singleton, Factory, Observer, and Strategy design patterns in the context of an HMI simulation system.
- **Steps**:
  1. **Singleton**: Implement a `HMISystem` class to manage the HMI state and ensure only one instance exists.
  2. **Factory**: Create a factory to instantiate different types of controls (e.g., Button, Slider).
  3. **Observer**: Implement the observer pattern to notify widgets when the system switches between modes (e.g., Day/Night mode).
  4. **Strategy**: Use the strategy pattern to define different rendering behaviors (e.g., 2D vs. 3D rendering).

## Requirements

- C++11 or higher
- A C++ compiler (e.g., g++, clang++)
- Standard library headers: `<iostream>`, `<map>`, `<string>`, `<vector>`, `<thread>`, `<queue>`, `<random>`, `<chrono>`

## Usage

To run the programs, compile each source file separately and execute the generated binaries. Below is an example command:

```bash
g++ -o hmi_simulation main.cpp
./hmi_simulation
