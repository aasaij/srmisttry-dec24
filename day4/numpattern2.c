#include <stdio.h>
//Program to print the following pattern
/*
5
12345  
1234
123
12
1
*/
int main(){
	int n;
	scanf("%d", &n);
	for (int r = n; r>=1; --r){
		for (int c = 1; c<=r; c++)
			printf("%d", c);
		printf("\n");
	}
	return 0;
}