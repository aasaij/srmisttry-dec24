#include <stdio.h>
int main (){
	char ch = 'A';
	char *ptr;
	ptr = &ch;
	(*ptr)++;
	printf("%c", *ptr);
	return 0;
}


