#ifndef LINKEDLISTH
#define LINKEDLISTH


// Frame struct
typedef struct intNode
{
	int num;
	struct intNode* next;
} intNode;
void printList(intNode* head);
intNode* addNode(intNode* head, intNode* newNode);
intNode* createIntNode(int value);
intNode* deleteNode(intNode* head);

#endif