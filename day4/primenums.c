//Program to print prime number between x and y
#include <stdio.h>
#include <stdbool.h>
int main(){
	int x, y;
	scanf("%d-%d", &x,&y); //10-20
	for (int n = x; n<=y; n++){
		bool isPrime = true;
		if (n==1)
			isPrime = false;
		else if(n > 3 && ( n % 2 == 0 || n % 3 == 0))
			isPrime = false;
		else{
			for(int i = 5; i*i<=n; i+=6){
				if (n % i == 0 || n %(i+2)==0){
					isPrime = false;
					break;
				}								
			}
		}
		if(isPrime)
			printf("%d ", n);
	}
	return 0;
}