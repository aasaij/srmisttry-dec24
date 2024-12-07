#include <stdio.h>

int main(){
	int i = 1;
	goto exit;
	loop1:
		if (i == 100)
			goto exit;
		printf("%d ", i);
		i++;
		goto loop1;
	exit:
		printf("Thank you so much.....");
		goto loop1;
	return 0;
}