This project defines a templated container class ArrayWrap, which is a dynamic array that supports various operations such as adding elements, removing elements, swapping, and more. Additionally, custom exception classes (SizeException, IndexException, and ConstructorException) are implemented to handle errors that occur when performing operations such as out-of-bounds access or exceeding the array's maximum size.

The core functionality is provided by the ArrayWrap class, which is templated to handle any data type (T). The program demonstrates the usage of this class with an array of integers.

Features
ArrayWrap Class: A dynamic array that supports:
  push_back() - Adds an element to the end of the array.
  pop_back() - Removes and returns the last element.
  remove() - Removes an element at a specific index.
  swap() - Swaps two elements in the array.
  clear() - Clears the entire array.
  operator[] - Allows array-style indexing for elements.
  print() - Prints the contents of the array.
Exception Handling: Three custom exceptions for error handling:
  SizeException - Thrown when the array is full or empty.
  IndexException - Thrown when accessing an invalid index.
  ConstructorException - Thrown if an invalid size is provided when creating the array.

How to Build and Run
To compile the program, use the following command (in the project root directory):
g++ -std=c++11 -o main main.cpp ArrayWrap.cpp
./main   # On Linux or macOS
main.exe # On Windows


Handling Errors
The program throws and catches the following exceptions:

  SizeException: This is thrown when the array exceeds its maximum size (e.g., when trying to add more elements than allowed).
  IndexException: This is thrown when trying to access an invalid index (e.g., negative or out-of-bounds index).
  ConstructorException: This is thrown when the array is initialized with an invalid size (e.g., size <= 0).
