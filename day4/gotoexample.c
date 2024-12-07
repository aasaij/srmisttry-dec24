//Program to demonstrate goto statement
#include <stdio.h>

int main(){
	printf("This is testing");
	starting:
		printf("You are all very brilliant!");
		printf("\nAnnrose is sooo cute!");
		goto starting;
		printf("Mahalakshmi is sooo beautiful!");
		printf("Thank you so much for being very cooperative!");
		return 0;	
}