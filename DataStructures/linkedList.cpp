#include "linkedList.h"
#include <iostream>
#include <sstream>

 intNode* createIntNode(int value)
{
	intNode* newIntNode = new intNode;
	newIntNode->num = value;
	newIntNode->next = NULL;
	return newIntNode;
}
 intNode* addNode(intNode* head, intNode* newNode) {
	 newNode->next = head;
	 return newNode;
 }
 void printList(intNode* head) {
	 intNode* curr = head;
	 while (curr != NULL) {
		 std::cout << curr->num +" - >" << std::endl;
		 curr = curr->next;
	 }
 }

 



