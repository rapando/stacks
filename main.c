/*
Rapando : Nov 27, 2021
Just a thing I tried with stacks in C
*/

#include <stdio.h>
#include <stdlib.h> // for malloc

#include "stack.c"

int main() {
    // allocate memory to the stack
    int *stack = malloc(sizeof(int) * STACK_SIZE);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    printf("pop : %d\n", pop(stack));
    printf("pop : %d\n", pop(stack));
    printf("peek : %d\n", peek(stack));
    printf("pop : %d\n", pop(stack));
    printf("pop : %d\n", pop(stack));
    printf("pop : %d\n", pop(stack));

    return 0;

}

