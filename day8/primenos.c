//Program to demonstrate enumerations
#include <stdio.h>
//typedef enum boolean {false, true} boolean;
typedef enum boolean {true=1, false=0} boolean;
boolean isPrime(int n){
	if (n == 1)
		return false;
	else if (n > 3 && (n % 2 == 0 ||n%3 == 0))
		return false;
	else{
		for (int i = 5; i*i<=n; i+=6){
			if (n %i == 0 || n % (i+2)==0)
				return false;
		}
		return true;
	}
	
}
//Program to print first N prime numbers

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1, x=2; i<=n;x++ )
		if (isPrime(x)){
			printf("%d ", x);
			i++;
		}
	return 0;
}