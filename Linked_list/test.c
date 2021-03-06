#include "test.h"

int main() {
	testCreate();
	testInsert();
	testPreorder();
	testInorder();
	testPostorder();
	testDelete();
	return 0;
}

void testCreate() {
	TNODE *testNode = create();
	testNode->value = 20;

	printf("Test create\n");

	printf("Test 1\n");
	assert(testNode->value == 20);

	printf("Test 2\n");
	assert(testNode->leftChild == NULL);
	assert(testNode->rightChild == NULL);

	printf("Tests Passed\n\n");
}

void testInsert() {
	TNODE *testNode = create();
	testNode->value = 5;

	printf("Test insert\n");

	printf("Test 1\n");
	insert(testNode,10);
	assert(testNode->rightChild->value == 10);

	printf("Test 2\n");
	insert(testNode,15);
	assert(testNode->rightChild->rightChild->value == 15);

	printf("Test 3\n");
	insert(testNode,20);
	assert(testNode->rightChild->rightChild->rightChild->value == 20);

	printf("Test 4\n");
	insert(testNode, 0);
	assert(testNode->leftChild->value == 0);

	printf("Tests Passed\n\n");
}

void testPreorder() {
//I dont know a proper way to incorperate 
//a test for this function
}

void testInorder() {
//I dont know a proper way to incorperate 
//a test for this function
}

void testPostorder() {
//I dont know a proper way to incorperate 
//a test for this function
}

void testDelete() {
	TNODE *testNode = create();
	testNode->value = 5;
	insert(testNode,10);
	insert(testNode,15);
	insert(testNode,20);

	printf("Test delete\n");

	printf("Test 1\n");
	delete(testNode);
	assert(testNode->leftChild == NULL);
	assert(testNode->rightChild == NULL);
}