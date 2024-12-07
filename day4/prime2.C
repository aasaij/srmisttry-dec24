//Program to check whether the given number is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
if (n==1)
        printf("Neither prime nor composite");
    else{
        // for(int i = 2; i<=sqrt(n); ++i){
            for(int i = 2; i*i<=n; ++i){
            if (n % i==0){
                printf("Not prime");
                return 0;
            }
        }
        printf("Prime");
    }	return 0;
}
5 => 6 x 1 - 1
17 ==> 6 x 3 - 1
23 ==> 6 x 4 - 1
73 ==> 6 x 12 + 1