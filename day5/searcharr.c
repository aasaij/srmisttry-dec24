//Program to search en element in an array
#include <stdio.h>

int main(){
	int n, search;
	scanf("%d", &n);
	
	int arr[n];
	//reading n number of elements
	for (int index = 0; index<n; index++)
		scanf("%d", &arr[index]);

	//Getting search element
	scanf("%d", &search);
	//implementing linear search algorithm
	for(int index = 0; index<n; index++){
		if (search == arr[index]){
			printf("Found");
			return 0;
		}
	}
	printf("Not found");
	return 0;
}