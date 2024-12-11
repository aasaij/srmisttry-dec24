#include <stdio.h>
int main (){
	int x = 10;
	int *ptr = NULL;
	ptr = &x;
	*ptr = 100;
//	printf("%p\n", ptr);
//	printf("%p\n", &x);
	printf("%d %d", *ptr, x);
	return 0;
}

//int a = 10;
//
//
//<datatype> *<identifier_name>;
//
//<pointer_name> = &<variable_name>
//
//*<pointer_name>  --> print the value which the pointer points
