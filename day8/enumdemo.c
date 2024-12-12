//Program to demonstrate enumerations
#include <stdio.h>

enum days{Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
typedef enum boolean {false, true} boolean;


int main(){
	int day;
	scanf("%d", &day);
	switch(day){
		case Monday:
			printf("It's Monday. Concentrate on studies."); break;
		case Tuesday ... Thursday:
			printf("Still it's week day only.");break;
		case Friday:
			printf("It's Friday. Get ready for week end!"); break;
		case Saturday: case Sunday:
			printf("Enjoy your week end"); break;
		default:
			printf("Invalid day number!");
	}
	return 0;
}