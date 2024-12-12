#include <stdio.h>
//Bitfields example
typedef struct Flag{
	int x : 32;
	int y : 4;
	int z : 2;
}flag;

int main(){
	flag f = {7,17,3};
//	printf("%d %d %d", f.x, f.y, f.z);
	printf("%lu", sizeof(flag));
	
	return 0;
}