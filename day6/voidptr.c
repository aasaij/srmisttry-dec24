//Program to demonstrate void*
#include <stdio.h>

int main(){
	int x=10;
	float f = 10.5;
	char c = 'X';
	double d = 123.123;
	void *ptr;
	ptr = &x;
	printf("%d", *(int*)ptr);
	ptr = &f;
	printf("\n%g", *(float*)ptr);
	ptr = &c;
	printf("\n%c", *(char*)ptr);
	ptr = &d;
	printf("\n%g", *(double*)ptr);
	return 0;
}