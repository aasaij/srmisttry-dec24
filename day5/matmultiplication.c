//Program for matrix multiplication
#include <stdio.h>

int main(){
	int r1,c1,r2, c2;
	scanf("%dx%d", &r1, &c1); // A matrix
	scanf("%dx%d", &r2, &c2); // B matrix
	if (c1 == r2){
		int A[r1][c1], B[r2][c2], C[r1][c2];
		for(int r = 0; r<r1; r++)
			for (int c = 0; c<c1; c++)
				scanf("%d", &A[r][c]);
		for(int r = 0; r<r2; r++)
			for (int c = 0; c<c2; c++)
				scanf("%d", &B[r][c]);
		for(int r = 0; r<r1;r++){
			for (int c = 0; c<c2; c++){
				C[r][c] = 0;
				for(int k = 0; k<c1; k++)
					C[r][c] = C[r][c] + A[r][k] * B[k][c];
			}
		}
		for (int r = 0; r<r1; r++){
			for (int c = 0; c<c2; c++)
				printf("%4d", C[r][c]);
			printf("\n");
		}
		
			
	}
	else
		printf("Invalid");
	
	return 0;
}