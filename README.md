## Binary Search Tree Program (C++)

### Overview
Welcome to the Binary Search Tree program! This program allows you to build a balanced binary search tree from a set of integers and find the k-th smallest element in the tree.

### Instructions
To run the program, follow these simple steps:
1. Clone the repository to your local machine.
2. Open your terminal and navigate to the project directory.
3. Type `make run` into the terminal and press Enter to execute the program.
4. Follow the on-screen instructions to input the array of integers and the value of k.
5. The program will print the binary search tree in the console and output the k-th smallest element.

### Cleaning Up
After running the program, you can clean up any generated files by typing `make clean` into the terminal and pressing Enter.

### Program Files
- `main.cpp`: This file contains the main program code, including functions to build the binary search tree, find the k-th smallest element, and print the binary tree.
- `Makefile`: This file contains commands to compile and run the program.
- `README.md`: This file provides instructions on how to run the program.

### Example Usage
Here's an example of how to run the program:
```
$ make run
Which smallest element would you like to see: 3
BST Inorder Traversal: 6 17 20 41 45 52 57 65 71 76 79 87 92 95 99
Binary Tree:
          99

     95

          92

76

               87

          79

               71

     65

          57

               52

6

          45

     41

          20

               17

This value is: 20
$ make clean
```

### Technologies, Algorithms, and Concepts Used
This program utilizes the following technologies, algorithms, and concepts:
- **C++**: The program is written in the C++ programming language.
- **Binary Search Tree (BST)**: The program implements a binary search tree data structure to efficiently store and organize the input elements.
- **Balanced BST Construction**: It employs a method to construct a balanced binary search tree from a sorted array, ensuring optimal search and insertion times.
- **Inorder Traversal**: The program performs an inorder traversal of the BST to display its elements in sorted order.
- **Recursive Algorithms**: The construction of the BST and the inorder traversal utilize recursive algorithms for efficient implementation.
- **Pointer Manipulation**: The program effectively utilizes pointers to create and traverse nodes within the binary search tree.
- **Divide and Conquer Strategy**: The process of building a balanced BST from a sorted array employs a divide and conquer strategy to efficiently partition the array and construct the tree.

### Have Fun!
Enjoy exploring the binary search tree program! If you have any questions or feedback, feel free to reach out.