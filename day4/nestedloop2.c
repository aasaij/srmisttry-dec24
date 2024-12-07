#include <stdio.h>
int main(){
	//outer loop
	for (int i = 1; i<=10; i++){
		//inner loop
		for (int j = 1; j<=10; j++)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}