#include <stdio.h>

//Program to print an array in reverse order
int main(){
	int arr[] = {45,768,88,66,33};
	//findinf array length
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int index = size-1; index>=0; index--)
		printf("%d ", arr[index]);
	return 0;
}