//Puzzles using switch
#include <stdio.h>

int main(){
	int f = 1, x = 2;
	
	switch(f){
		printf("Welcome to Switch Demo");
		x = 10;
		case 10 - 9:
			printf("You are all very very interactive!");
//			break;
			
		case 2:
			printf("Thank you so much for being very silent!");
			break;
		default:
			printf("You are all very good listeners!");
	}
	return 0;
}