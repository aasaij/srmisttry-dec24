//Program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
	long long int principal;
	double years, rate, interest;
	char choice;
	printf("Principal Amount : ");
	scanf("%lld", &principal);
	printf("Number of years : ");
	scanf("%lf", &years);
	printf("Rate of interest : ");
	scanf("%lf", &rate);
	printf("Interest Type - [C]ompound/[S]imple ? ");
	scanf("\n%c", &choice);
	if (choice == 'C' || choice == 'c')
		interest = principal * pow(1+rate/100, years) - principal;
	else if (choice == 'S' || choice == 's')
		interest = principal * years * rate / 100;
	else{
		printf("Invalid choice!");
		return 0;
	}
	printf("Interest : %0*.*lf", 10, 2,interest);
	return 0;
}