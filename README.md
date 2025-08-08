# Custom C++ Data Structures

This repository contains custom implementations of fundamental data structures written in modern C++. The primary goal of this project is to gain a deep, "under-the-hood" understanding of how these structures work by building them from scratch.

This is a hands-on academic project focused on memory management, algorithmic logic, and Object-Oriented Programming principles in C++.

## 1. Singly Linked List (`LinkedList<T>`)

A custom, fully-featured, and memory-safe implementation of a generic Singly Linked List using C++ templates.

### Features Implemented:

-   **Generic Templated Design:** The list can hold any data type (`LinkedList<int>`, `LinkedList<std::string>`, etc.).
-   **Optimized `push_back`:** Uses a `tail` pointer to achieve `O(1)` time complexity for appending elements.
-   **Full Set of Operations:**
    -   `push_back(value)`: Adds an element to the end of the list.
    -   `push_front(value)`: Adds an element to the beginning of the list.
    -   `pop_back()`: Removes the last element.
    -   `pop_front()`: Removes the first element.
    -   `insert(value, index)`: Inserts an element at a specific index, intelligently using `push_front` and `push_back` for edge cases.
-   **Memory Safety:**
    -   Features a **RAII-compliant destructor (`~LinkedList()`)** that properly deallocates all nodes to prevent memory leaks.
    -   Includes a `clear()` method for manual memory management.
-   **Utility Methods:**
    -   `display()`: Prints the list contents to the console.
    -   `size()`: Returns the number of elements.
    -   `is_empty()`: Checks if the list is empty.

### Core Concepts Demonstrated:

-   **Templates (Generic Programming):** Creating reusable code for any data type.
-   **Object-Oriented Programming:** Using a nested `struct Node` to demonstrate encapsulation.
-   **Dynamic Memory Management:** Correct use of `new` and `delete` for nodes.
-   **Pointers and References:** In-depth manipulation of pointers to build and manage the list structure.
-   **Algorithmic Logic:** Implementation of traversal, insertion, and deletion algorithms.
-   **RAII (Resource Acquisition Is Initialization):** Ensuring resources (memory) are automatically released in the destructor.

## How to Use

Simply include the `LinkedList.h` header in your project.

```cpp
#include <iostream>
#include "LinkedList.h" // Assuming your class is in this header

int main() {
    LinkedList<int> list;
    list.push_back(10);
    list.push_front(5);
    list.insert(7, 1); // Insert 7 at index 1
    list.display(); // Expected output: 5 7 10
    
    return 0;
}
```
