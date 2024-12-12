//program to print natural numbers using recursion
#include <stdio.h>
void print(int n){
	if (n){
		print(n-1); //head recursion
		printf("%d ", n);
		print(n-1); //tail recursion
	}
}

int main(){
	int n;
	scanf("%d", &n);
	print(n);
	
	return 0;
}
