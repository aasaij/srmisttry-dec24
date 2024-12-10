//Program to find max and second max of list of elements
#include <stdio.h>
#include <limits.h>
int main(){
	int n, max, smax;
	max = smax = INT_MIN;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	for(int i = 0; i<n; i++){
		if (max < arr[i]){
			smax = max;
			max = arr[i];
		}
		else if (smax < arr[i])
			smax = arr[i];
	}
	printf("%d %d", max, smax);
		
	return 0;
}