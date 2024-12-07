#include <stdio.h>

int main(){
	int arr[] = {10,20,30, 45,6,7,8,9,12};
	printf("%lu", sizeof(arr)/sizeof(arr[0]));
//	arr[0] = 100;
//	arr[1] = arr[0]+10;
//	printf("%d", 3[arr]);
	
	return 0;
}