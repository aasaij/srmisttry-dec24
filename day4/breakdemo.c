//Program to demonstrate break statement
#include <stdio.h>

int main(){
	for (int i = 1;i<=10; i++){
		if (!(i % 3))
			break;
		printf("%d ", i);
	}
	return 0;
}