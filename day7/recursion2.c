//Program to print factorial of N
#include <stdio.h>
int fact(int x){
	//base case
	if (x ==0 || x == 1)
		return 1;
	else
		return x * fact(x-1);
}
int main(){
	int n, f = 1;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}