//Program to demonstrate function
#include <stdio.h>
int calc( int,int,char);
int main(){
	int x, y;
	char opr;
	scanf("%d %c %d", &x, &opr, &y); // 10 + 5
	printf("%d %c %d = %d", x, opr, y, calc(x,y,opr));	
	return 0;
	
}
int calc(int x, int y, char opr){
	switch(opr){
		case '+':
			return x+y;
		case '-':
			 return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
		default:
			return 0;
	}	
}
Attendance Link : https://bit.ly/RA-111224
Trainer : Tambi
Session : FN



