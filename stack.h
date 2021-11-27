#define STACK_SIZE 4

int topIndex(int *stack); // returns the index of the top item, 0 if full, STACK_SIZE if empty
int isFull(int *stack); // returns 1 if stack is full
int isEmpty (int *stack); // returns 1 if stack is empty
void push(int *stack, int item); // push an item to the of the stack
int pop(int *stack); // pops an item and returns it
int peek(int *stack); // pop, read and push back item