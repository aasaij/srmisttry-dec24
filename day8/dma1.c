//Program to demonstrate dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *x; // stack segment
	x = (int *)malloc(sizeof(int)); // heap segment
	*x = 100;
	printf("%d", *x);
	free(x);
	printf("%d", *x); //dangling pointer
	return 0;
}