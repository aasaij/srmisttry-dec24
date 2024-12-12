#include <stdio.h>

typedef struct Node {
	int data;
	struct Node *next;
}node;

//typedef struct Node node;
int main(){
	node root;
	printf("%lu", sizeof(node));
	return 0;
}