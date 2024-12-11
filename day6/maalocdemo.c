//Program to demonstrate dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr, size;
	scanf("%d", &size);
	arr = (int *)malloc(size * sizeof(int));
	arr[0] = 100;
	arr[2] = 200;	
	
	return 0;
}

Attendance Link : https://bit.ly/SA-101224
Trainer : Tambi
Session : FN