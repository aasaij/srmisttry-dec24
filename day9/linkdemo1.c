#include <stdio.h>
#include <stdlib.h>
typedef struct Link{
	int a;
	int *ptr;
}link;

int main(){
	link *test;
	test =(link *) malloc(sizeof(link));
	test->a = 100;
	test->ptr = &(test->a);
	printf("%d %d", test->a, *(test->ptr));
	return 0;
}