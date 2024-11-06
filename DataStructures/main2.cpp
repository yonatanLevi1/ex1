#include <iostream>
#include <sstream>
#include <windows.h> // WinApi header - needed for setting console color
#include "linkedList.h"

int main() {
	intNode* a = createIntNode(1);
	intNode* b = createIntNode(2);
	intNode* c = createIntNode(3);
	intNode* d = createIntNode(4);
	a->next = b;
	b->next = c;
	c->next = d;
	printList(a);

	return 0;
}