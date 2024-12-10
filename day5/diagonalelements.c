//Program to print diagonal elements of square matrix
#include <stdio.h>
int main(){
	int m,n;
	scanf("%dx%d", &m, &n);
	if ( m == n){
		int arr[m][n];
		for (int r = 0; r<m; r++)
			for (int c = 0; c<n; c++)
				scanf("%d", &arr[r][c]);
		printf("Main diagonal elements : ");
		for (int r = 0;r<m; r++)		
			printf("%d ", arr[r][r]);
		printf("\nOff diagonal elements : ");
		for (int r = 0;r<m; r++)		
			printf("%d ", arr[r][n-r-1]);		
	}
	else
		printf("Invalid dimension!");
	
	
	return 0;
}