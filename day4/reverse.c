//Program to reverse the given number
#include <stdio.h>

int main(){
	long long int n, rev = 0;
	scanf("%lld", &n);
	while (n != 0){
		int remainder = n % 10;
		rev = rev * 10 + remainder;
		n = n / 10;
	}
	printf("%lld\n", rev);
	return 0;
}

//while statement -- entry loop
//syntax:
//		while(<condition>){
//			<statements>
//		}