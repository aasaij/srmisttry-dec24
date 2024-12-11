//Program to demonstrate function
#include <stdio.h>
void greet(char[], char);
int main(){
	//function declaration or function proto-type
	greet("Karnika", 'F');	
	printf("This is testing");
	greet("Sornakka",'F') ;	
	printf("Welcome to world of C Program\n");
	greet("Kavin", 'M');	
	printf("You are all very good Engineer!");
	greet("Senabathy",'M');
	greet("Ramya",'F');	
	greet("Chanthini",'F');	
	
	return 0;
}

void greet(char str[], char gender){
	printf("Good Morning %s%s\n",gender=='F'?"Ms. ":"Mr. ", str);
	printf("Have a Good day!\n");
}

