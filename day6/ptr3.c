#include <stdio.h>
int main (){
	int x = 10;
//	int *ptr = NULL;
	int *ptr = &x;
//	*ptr = 100;
	*ptr++ = 100;
	printf("%d %d",  x, *ptr);
	return 0;
}


