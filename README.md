# C++ Singly Linked List Implementation

This repository contains a custom, fully-featured, and memory-safe implementation of a generic Singly Linked List. This project was built from scratch in modern C++ to demonstrate a deep, "under-the-hood" understanding of fundamental data structures.

This is a hands-on project focused on dynamic memory management, algorithmic logic, template metaprogramming, and Object-Oriented principles.

## Features

-   **Generic Templated Design (`LinkedList<T>`):** The list can hold any data type (`LinkedList<int>`, `LinkedList<std::string>`, etc.).
-   **Optimized `push_back`:** Uses a `tail` pointer to achieve **O(1)** time complexity for appending elements.
-   **Comprehensive API:** A full set of operations for complete list manipulation:
    -   `push_back(value)`: Adds an element to the end of the list.
    -   `push_front(value)`: Adds an element to the beginning of the list.
    -   `pop_back()`: Removes the last element.
    -   `pop_front()`: Removes the first element.
    -   `insert(value, index)`: Inserts an element at a specific index.
    -   `erase(index)`: Removes an element at a specific index.
    -   `find(value)`: Searches for an element and returns `true` or `false`.
    -   `reverse()`: Reverses the entire list in-place.
-   **Safe and Convenient Access:**
    -   `operator[]`: Provides direct access to elements by index, similar to `std::vector`.
    -   **Bounds Checking:** The `operator[]` throws an `std::out_of_range` exception for invalid indices, ensuring safe usage.
-   **Robust Memory Management:**
    -   Features a **RAII-compliant destructor (`~LinkedList()`)** that properly deallocates all nodes to prevent any memory leaks.
    -   Includes a public `clear()` method for manual memory management.
-   **Utility Methods:**
    -   `display()`: Prints the list contents to the console.
    -   `size()`: Returns the number of elements.
    -   `is_empty()`: Checks if the list is empty.

## Core Concepts Demonstrated

-   **Templates (Generic Programming):** Creating reusable code for any data type.
-   **Object-Oriented Programming:** Using a nested `struct Node` to demonstrate strong encapsulation.
-   **Dynamic Memory Management:** Correct and safe use of `new` and `delete` for nodes.
-   **Pointers and Data Structures:** In-depth manipulation of pointers to build and manage the list structure.
-   **Algorithmic Logic:** Implementation of traversal, insertion, deletion, and reversal algorithms.
-   **Operator Overloading:** Custom implementation of the subscript operator `[]`.
-   **Exception Handling:** Using `throw` to report runtime errors like out-of-bounds access.
-   **RAII (Resource Acquisition Is Initialization):** Ensuring resources (memory) are automatically and reliably released in the destructor.

## How to Use

Simply include the header file containing the `LinkedList` class in your project.

```cpp
#include <iostream>
#include "LinkedList.h" // Your header file

int main() {
    LinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_front(5); // list is now: 5 -> 10 -> 20

    list.insert(7, 1);  // list is now: 5 -> 7 -> 10 -> 20
    list.erase(2);      // list is now: 5 -> 7 -> 20

    list.reverse();     // list is now: 20 -> 7 -> 5

    std::cout << "List contents: ";
    list.display(); // Expected output: 20 7 5
    std::cout << std::endl;

    std::cout << "Element at index 1: " << list[1] << std::endl; // Expected output: 7

    return 0;
}
```

```
---
Этот `README` выглядит очень профессионально. Он не только описывает, что делает код, но и "продает" твои навыки, объясняя, какие сложные концепции ты продемонстрировал в этом проекте. Можешь смело его использовать.
