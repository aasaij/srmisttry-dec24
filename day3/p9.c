//Puzzles using switch
#include <stdio.h>

int main(){
	int f = 2, x = 2;
	
	switch(x){
		case 10 - 9:
			printf("You are all very very interactive!");
			break;
			
		case x://error
			printf("Thank you so much for being very silent!");
			break;
		default:
			printf("You are all very good listeners!");
	}
	return 0;
}