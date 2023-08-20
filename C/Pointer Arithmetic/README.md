# Pointer Arithmetic: Navigate an Array (C)

## Description

Welcome to the world of pointers! In this challenge, you're going to dive into one of the foundational concepts in C: **pointer arithmetic**. Your objective is to use pointers to navigate through an array of integers and perform some basic operations.

Your program should:

1. Declare an array of integers with at least 5 elements.
2. Declare a pointer to navigate through this array.
3. Using the pointer:
   - Display the value of the first element.
   - Display the value of the third element.
   - Calculate and display the sum of all elements in the array.

### Detailed Steps

1. **Array Declaration**: Start by declaring an array `arr` of integers with some predefined values (for instance, `int arr[5] = {1, 2, 3, 4, 5};`).

2. **Pointer Initialization**: Declare a pointer `int *p;` and initialize it to point to the first element of `arr` (Hint: `p = arr;` or `p = &arr[0];`).

3. **Accessing Elements using Pointers**: To get the value of the first element, you would simply use `*p`. To get to the third element, you can use pointer arithmetic! Think about how you might add to the pointer to move it through the array.

4. **Calculate Sum**: Loop through the array using the pointer (without array indexing) and keep a running total to calculate the sum of the array elements.

### Example Output

Value of the first element: 1
Value of the third element: 3
Sum of all elements: 15

## Hints

- Remember, a pointer points to a memory location. When you add to or subtract from a pointer, you're moving it by that many "units" of its data type. For an `int` pointer on most systems, adding 1 will actually increase its memory address by 4 bytes (size of an integer).
- Always be cautious when navigating arrays with pointers. Going beyond the bounds of the array can lead to undefined behavior!

## Note

This challenge aims to introduce you to the basics of pointer arithmetic. By the end, you'll have a foundational understanding of how pointers can be used to navigate arrays. Happy coding!
