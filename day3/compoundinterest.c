//Program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
	long long int principal;
	double years, rate, interest;
	printf("Principal Amount : ");
	scanf("%lld", &principal);
	printf("Number of years : ");
	scanf("%lf", &years);
	printf("Rate of interest : ");
	scanf("%lf", &rate);
	interest = principal * pow(1+rate/100, years) - principal;
//	printf("Interest : %010.2lf", interest);
	printf("Interest : %0*.*lf", 10, 2,interest);
	return 0;
}