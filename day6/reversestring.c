//Program to reverse a string

#include <stdio.h>

int main(){
	char str[100];
	int len, num;
	scanf("%s%n", str, &len);
//	scanf("%d%n", &num,&len );
	//Reversing the given string
	for (int i =0, j=len-1; i<j; i++, j--)
		str[i] = (str[i]+str[j])- (str[j]=str[i]);
	//Traversing the reversed string
	for (int index=0;str[index]!='\0';index++)
		putc(str[index],stdout); 
//		printf("%c", str[index]);
	
	return 0;
}