
#include "Queue.h"
void initQueue(Queue* q, unsigned int size) {
	q->head = new int[size];
	q->maxSize = size;
	q->count = 0;
	q->addIndex = 0;
	q->removeIndex = 0;


}
void cleanQueue(Queue* q) {
	delete[] q->head;
	q->count = 0;
	q->addIndex = 0;
	q->removeIndex = 0;
}

void enqueue(Queue* q, unsigned int newValue) {
	if (!isFull(q)) {
		q->head[q->addIndex] = newValue;
		q->addIndex = (q->addIndex + 1) % q->maxSize;
		q->count++;
	}
}
int dequeue(Queue* q) {// return element in top of queue, or -1 if empty
	int val = q->head[q->removeIndex];
	if (!isEmpty(q)) {
		q->head[q->removeIndex] = -1;
		q->removeIndex = (q->removeIndex + 1) % q->maxSize;
		q->count--;

		return val;
	}
	else {
		return -1;
	}
}

bool isEmpty(Queue* s) {
	return s->count == 0;
}
bool isFull(Queue* s) {
	return s->count == s->maxSize;
}
