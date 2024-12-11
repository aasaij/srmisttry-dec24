//Program to demonstrate pointer and array
#include <stdio.h>

int main(){
	int arr[] = {17,15,7,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int *ptr;
	ptr = arr;
	
	printf("%d %d", *(arr+3), *(ptr+2))	;
	
	return 0;
}