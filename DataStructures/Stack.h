#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	intNode* node;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty
void printStack(Stack* s);

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s);
int listLen(Stack* s);


#endif // STACK_H
