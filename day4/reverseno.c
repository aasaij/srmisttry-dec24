//Program to reverse the given number
#include <stdio.h>

int main(){
	long long int n, rev = 0;
	scanf("%lld", &n);
//	while (n != 0){
//		rev = rev * 10 + n % 10;
//		n = n / 10;
//	}
	while (rev=rev*10+n% 10 ,n /= 10);
	printf("%lld\n", rev);
	return 0;
}

//while statement -- entry loop
//syntax:
//		while(<condition>){
//			<statements>
//		}