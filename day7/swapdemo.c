//Program to demonstrate call by value and call by reference
#include <stdio.h>
//Call by value
//void swap(int x, int y){
//	x = x+y - (x=y);
//}

//Call by reference
void swap(int *x, int *y){
    *x = *x+*y - (*y=*x);
}

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("before swapping \n");
	printf("X = %d\tY = %d\n", x, y);
//	swap(x,y);
	swap(&x, &y);
	printf("after swapping \n");
	printf("X = %d\tY = %d\n", x, y);
	
	return 0;
}