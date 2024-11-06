#include <iostream>
#include <sstream>
#include <windows.h> // WinApi header - needed for setting console color
#include "linkedList.h"
#include "Stack.h"

int main() {
	/* intNode* a = createIntNode(1);
	intNode* b = createIntNode(2);
	intNode* c = createIntNode(3);
	intNode* d = createIntNode(4);
	a->next = b;
	b->next = c;
	c->next = d;
	printList(a); */

	Stack* st = new Stack;
	initStack(st);
	push(st, 1);
	push(st, 2);
	push(st, 3);
	printStack(st);

	return 0;
}