//Program to print natural numbers
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
//	for (int i = 1; i<=n; ++i)
//		printf("%d\t", i);
//	for (int i = n; i>=1; --i)
//		printf("%1d ", i);
	for (int i = n%2?n:n-1; i>=1; i-=2)
		printf("%d\t", i);
	return 0;
}