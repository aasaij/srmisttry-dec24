//Program to check whether the given string is palindrome or not

#include <stdio.h>

int main(){
	char str[100];
	int len, num;
	scanf("%s%n", str, &len);
//	scanf("%d%n", &num,&len );
	//Reversing the given string
	for (int i =0, j=len-1; i<j; i++, j--)
		if (str[i]!=str[j]){
			printf("Not Palindrome");
			return 0;
		}
	printf("Palindrome");

	return 0;
}