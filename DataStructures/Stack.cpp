#include "Stack.h"
#include <iostream>
#include <sstream>
void push(Stack* s, unsigned int element) {

	Stack* newS = new Stack;
	initStack(newS);
	newS->node->num = element;
	s->node = addNode(s->node,newS->node);
}
int pop(Stack* s) { // Return -1 if stack is empty
	int val = s->node->num;
	s->node = deleteNode(s->node);
	return val;
}
void initStack(Stack* s) {
	s->node = new intNode;
	s->node->num = 0;
	s->node->next = NULL;
}
void printStack(Stack* s) {
	intNode* curr = s->node;
	while (curr != NULL) {
		std::cout << curr->num << std::endl;
		curr = curr->next;
	}
}
void cleanStack(Stack* s) {
	delete(s);
	s = NULL;
}
bool isEmpty(Stack* s) {
	return s == NULL;
}
bool isFull(Stack* s) {
	return s != NULL;
}