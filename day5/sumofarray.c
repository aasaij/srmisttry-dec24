//Program to sum of elements in the list
#include <stdio.h>
int main(){
	int n,i, element, sum=0;
	scanf("%d", &n);
	int arr[n];
	//Getting n elements from the user
	for (int i = 0; i<n; scanf("%d", &arr[i++]));
	//Getting an element to be counted	
	for (i = 0 ; i<n;  i++)
		sum+=arr[i];
	printf("%d", sum);
	return 0;
}