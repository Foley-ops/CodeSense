# Array Elements Average (C)

## Description:

In this challenge, you will create a C program that:

1. Asks the user for the number of elements they want to input.
2. Accepts integer input for each element.
3. Calculates and prints the average of all entered integers.

Arrays are foundational data structures in C, allowing you to store multiple elements of the same data type in contiguous memory locations. They can be accessed by indexing, starting from zero.

## Walkthrough:

1. **Initialization**:

   - Start by declaring an integer array of a size known in advance. For this challenge, you can limit the array size to a reasonable number, say 100.
   - Also, initialize other essential variables like `sum` to store the total of all elements and `average` to store the computed average.

2. **Input from User**:

   - Prompt the user to enter the number of elements they wish to input. This number shouldn't exceed the array's size.
   - Using a `for` loop, iterate and prompt the user to enter each element, storing these in the array.

3. **Calculate Average**:

   - To compute the average, iterate over the array, summing up all the elements. Then, divide the total sum by the number of elements.

4. **Output**:
   - Print the computed average.

## Hints:

- Use the `%d` format specifier in `printf` and `scanf` to deal with integers.
- Remember that array indexing starts from `0`, so if a user decides to input `5` elements, the array elements will be stored in positions `0` through `4`.

## Sample Code Skeleton:

```c
#include <stdio.h>

int main() {
    int numbers[100]; // An array to store numbers
    int n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ensure n doesn't exceed the array's size
    if (n > 100 || n <= 0) {
        printf("Invalid input. Please enter a number between 1 and 100.");
        return 1; // Exit with an error code
    }

    // Loop to get input from the user
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / n;
    printf("Average of the entered numbers: %f\n", average);

    return 0;
}
```
