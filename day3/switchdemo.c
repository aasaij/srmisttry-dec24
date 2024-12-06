//Program to demonstrate switch statement
/*
1 -> It's Monday. Concentrate on studies
2,3,4 -> Still it's week day only.
5 -> It's Friday. Get ready for week end
6,7 -> Enjoy your week end
otherwise
	Invalid day number!
*/
#include <stdio.h>

int main(){
	int day;
	scanf("%d", &day);
	switch(day){
		case 1:
			printf("It's Monday. Concentrate on studies."); break;
		case 2 ... 4:
			printf("Still it's week day only.");break;
		case 5:
			printf("It's Friday. Get ready for week end!"); break;
		case 6: case 7:
			printf("Enjoy your week end"); break;
		default:
			printf("Invalid day number!");
	}
	return 0;
}