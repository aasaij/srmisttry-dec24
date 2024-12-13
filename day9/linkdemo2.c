//Program to demonstrate a link
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node *ptr;
}node;
int main(){
	node *x, *y, *z;
	x = (node*)malloc(sizeof(node));
	y = (node*)malloc(sizeof(node));
	z = (node*)malloc(sizeof(node));
	x->data  = 100;
	y->data = 200;
	z->data = 300;
	x->ptr = y;
	y->ptr = z;
	z->ptr = NULL;
	return 0;
}