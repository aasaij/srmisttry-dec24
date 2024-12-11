#include <stdio.h>
int main (){
	int x = 10, y= 20;
//	int *ptr = NULL;
	int *ptr = &x;
	*ptr = 100;
	(*ptr)++;
	++*ptr;
	printf("%d %d\n",  x, *ptr);
	ptr = &y;
	printf("%d %d",  x, *ptr);
	return 0;
}


