//Program to demonstrate break statement
#include <stdio.h>

int main(){
	for (int j = 1;j<=5; j++){
		for (int i = 1;i<=10; i++){
			if (!(i % 3))
//				break;
				goto exit;
			printf("%d ", i);
		}
	}
	exit:
	return 0;
}