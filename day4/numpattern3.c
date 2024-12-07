//Program to print the following pattern
/*
5
54321
 4321
  321
   21
    1
*/
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int r = n; r>=1; r--){
		//printing space
		printf("%*s", n-r, "");
//		for (int c = 1; c<=n-r; c++)
//			printf(" ");
		//printing numbers
		for(int c = r; c>=1; --c)
			printf("%d", c);
		printf("\n");
	}
	return 0;
}