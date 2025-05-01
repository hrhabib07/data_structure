# Linked List

## Why Do We Need a Linked List?

Arrays have two main limitations:

1. **Fixed Size:** Once an array is declared, its size cannot be changed. Although this can be handled using dynamic arrays like `vector` in C++, it doesn't address the next issue.
2. **Sequential Memory Allocation:** Arrays require contiguous memory locations, which can be inefficient or problematic when memory is fragmented.

To overcome the **sequential memory allocation problem**, we use a different data structure called a **Linked List**. It allows dynamic memory allocation and doesn't require the elements to be stored in contiguous memory.

## How Does a Linked List Work?

A Linked List consists of nodes, where each node contains:
- The **value/data** of the current element
- A **pointer/reference** to the next node in the sequence

By storing the memory address of the next node, a linked list creates a chain-like structure, allowing elements to be connected without being stored in adjacent memory locations. This makes it flexible and efficient for insertion and deletion operations.
