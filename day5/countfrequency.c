//Program to count the frequency of an element in the list
#include <stdio.h>
int main(){
	int n,i, element, cnt;
	scanf("%d", &n);
	int arr[n];
	//Getting n elements from the user
	for (int i = 0; i<n; scanf("%d", &arr[i++]));
	//Getting an element to be counted
	scanf("%d", &element);
	for (i = 0, cnt=0; i<n;  i++)
		if (element == arr[i])
			cnt++;
	printf("%d", cnt);
	return 0;
}