//Program to print the following pattern
/*
5           Row Number
1234512345  5
1234  1234  4
123    123  3
12      12  2
1        1  1
12      12  2
123    123  3
1234  1234  4
1234512345  5 
*/
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int r = 1; r<n; r++){
		for(int c = 1; c<=r; c++)
//			printf("%d", c);
			printf("*");
		printf("%*s", (n-r) * 2,"");
		for(int c = 1; c<=r; c++)
//			printf("%d", c);
			printf("*");
		printf("\n")		;
	}	
	for (int r = n; r>=1; r--){
		for(int c = 1; c<=r; c++)
//			printf("%d", c);
			printf("*");
		printf("%*s", (n-r) * 2,"");
		for(int c = 1; c<=r; c++)
//			printf("%d", c);
			printf("*");
		printf("\n")		;
	}
	
return 0;	
}