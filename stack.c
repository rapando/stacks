#include <stdio.h>
#include "stack.h"

// returns the index of the top item, 0 if full, STACK_SIZE if empty
int topIndex(int *stack) {
    int topIndex = STACK_SIZE;
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != 0) {
            topIndex = i;
            break;
        }
    }
    return topIndex;
}

// returns 1 if stack is full, if topIndex == 0
int isFull(int *stack) {
    if (topIndex(stack) == 0) {
        return 1;
    }
    return 0;
}

// returns 1 if stack is empty, if topIndex == STACK_SIZE
int isEmpty (int *stack) {
    if (topIndex(stack) == STACK_SIZE) {
        return 1;
    }
    return 0;
}
// push an item to the of the stack
// basically write it to position topIndex - 1
void push(int *stack, int item) {
    if (isFull(stack)==1) {
        printf("stack is full. can't push\n");
        return;
    }
    stack[topIndex(stack) - 1] = item;
    printf("pushed %d to stack\n", item);
}

// pops an item and returns it
int pop(int *stack) {
    if (isEmpty(stack)==1) {
        printf("stack is empty. can't pop :: ");
        return 0;
    }
    int top = topIndex(stack);
    int item = stack[top];
    stack[top] = 0;
    return item;
}

// pop, read and push back item
int peek(int *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty. can't peek\n");
        return 0;
    }
    int item = pop(stack);
    push(stack, item);
    return item;
}

