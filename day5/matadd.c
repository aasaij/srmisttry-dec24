#include <stdio.h>

int main(){
	int m, n;
	scanf("%dx%d", &m, &n); // 5x5
	int A[m][n], B[m][n], S[m][n];
	//Reading elements for Matrix A
	for (int r = 0; r<m; r++)
		for (int c = 0; c<n; c++)
			scanf("%d", &A[r][c]);
	//Reading elements for Matrix B
	for (int r = 0; r<m; r++)
		for (int c = 0; c<n; c++)
			scanf("%d", &B[r][c]);	
	//Addition of two matrices
	for (int r = 0; r<m; r++)
		for (int c = 0; c<n; c++)
			S[r][c] = A[r][c] + B[r][c];
	//Printing the resultant matrix S
	for (int r = 0; r<m; r++){
		for (int c = 0; c<n; c++)
			printf("%4d", S[r][c]);	
		printf("\n");
	}
	
	return 0;
}