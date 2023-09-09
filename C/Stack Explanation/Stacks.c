#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Define the structure for a stack
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize a stack
void initializeStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an item onto the stack
void push(Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push %d.\n", item);
        return;
    }
    s->items[++s->top] = item;
}

// Function to pop an item from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Assuming -1 indicates an error
    }
    return s->items[s->top--];
}

// Function to peek at the top of the stack
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1; // Assuming -1 indicates an error
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initializeStack(&s);

    push(&s, 5);
    push(&s, 10);
    push(&s, 15);

    printf("Top of stack: %d\n", peek(&s));
    printf("Popped: %d\n", pop(&s));
    printf("Top of stack after pop: %d\n", peek(&s));

    return 0;
}

