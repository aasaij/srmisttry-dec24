//Program to demonstrate pointer and array
#include <stdio.h>

int main(){
	int arr[] = {17,15,7,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int *ptr;
	ptr = arr;	
	for (int i = 1; i<=size; i++)
		printf("%d ", *ptr++);
	return 0;
}