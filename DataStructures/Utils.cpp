#include "Utils.h"
#include "Stack.h"
#include "linkedList.h"
#include <iostream>
#include <sstream>
using namespace std;

void reverse(int* nums, unsigned int size) {
	int i = 0;
	Stack* tmp = new Stack;
	initStack(tmp);
	for (i = 0; i < size; i++) {
		push(tmp, nums[i]);
	}
	for (i = 0; i < size; i++) {
		nums[i] = pop(tmp);
	}
}
int* reverse10() {
	int* nums = new int[10];
	int i = 0;

	for (i = 0; i < 10; i++) {
		std::cin >> nums[i];
	}
	reverse(nums,10);
	return nums;
}