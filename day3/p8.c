//Puzzles using switch
#include <stdio.h>

int main(){
	int f = 2;
	switch(f){
		case 10 - 9:
			printf("You are all very very interactive!");
			break;
		case 0+1:
			printf("Thank you so much for being very silent!");
			break;
		default:
			printf("You are all very good listeners!");
	}
	return 0;
}