#include <stdio.h>

//Program to reverse an array
int main(){
//	int arr[] = {45,768,88,66,33};
	int size;
	scanf("%d", &size);
	int arr[size];
	for(int index = 0; index<size;index++)
		scanf("%d ", &arr[index]) );
	//finding array length
//	int size = sizeof(arr)/sizeof(arr[0]);
	//reversing the array
	for(int i=0, j=size-1;i<j;i++, j--)
		arr[i]= (arr[i]+arr[j])-(arr[j]=arr[i]);
	
	for(int index = 0; index<size;printf("%d ", arr[index++]))	;
	return 0;
}