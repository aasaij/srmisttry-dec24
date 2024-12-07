//Program to read N elements and print those elements
#include <stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	int arr[N];
	//Reading N elements
	for (int index = 0; index<N; index++)
		scanf("%d", &arr[index]);
	//Print N elements
	printf("[");
	for (int index = 0; index<N; index++)
		printf("%d,", arr[index]);
	printf("\b]");
	
	return 0;
}