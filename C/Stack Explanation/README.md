# Understanding Stacks in C

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. Think of it like a stack of plates; you can only add or remove a plate from the top. In computing terms, this means the last element added is the first element to be removed.

## Key Operations

- **Push:** Add an item to the top.
- **Pop:** Remove and return the top item.
- **Peek (or Top):** View the top item without removing it.

## Code Breakdown

The provided C code demonstrates a simple stack implementation. Here's what's happening:

1. **Struct Definition**:
    ```c
    typedef struct {
        int items[MAX_SIZE];
        int top;
    } Stack;
    ```
    This defines a stack structure containing an array `items` to hold the elements and an integer `top` to track the index of the top element.

2. **Initialization**:
    ```c
    void initializeStack(Stack *s) {
        s->top = -1;
    }
    ```
    This function initializes the stack's `top` index to `-1`, indicating that the stack is empty.

3. **Stack Operations**:
    - `isFull()`: Checks if the stack is full.
    - `isEmpty()`: Checks if the stack is empty.
    - `push()`: Adds an item to the top.
    - `pop()`: Removes and returns the top item.
    - `peek()`: Views the top item without removing it.

4. **Main Function**:
    In the main function, a stack `s` is created and initialized. We then `push` the numbers 5, 10, and 15 onto the stack. Subsequently, we `peek` to see the top of the stack (should display 15), then `pop` to remove the top item, and finally `peek` again to see the new top (should display 10).

### Enhancing Learning:

**Comments**: The code contains inline comments to help readers understand the purpose of each function and the logic behind specific lines.

```c
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Assuming -1 indicates an error
    }

In the above code snippet, for example, the comment indicates that -1 is returned as an error value when trying to pop from an empty stack.
