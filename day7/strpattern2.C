//program to print the following pattern
//input :
//	Madhan
//Output
//	Madhan
//	Madha
//	Madh
//	Mad
//	Ma
//	M
#include <stdio.h>
int main(){
//	printf("%*.*s good\n", -15,10,"Hema is sooo cute!");
	char str[100];
	int len;
	scanf("%s%n",str,&len );
	for (int i = len; i>=1;i--)
		printf("%*.*s%-*.*s\n", len,i,str, len,i,str);
	for (int i = 2; i<=len;i++)
		printf("%*.*s%-*.*s\n", len,i,str, len,i,str);
	
	return 0;
}
