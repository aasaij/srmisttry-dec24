//String --> Character Array
//Sequence of characters
//
//char str[] = "Niyas";
//char str1[10] = "Meenakshi";
//char str2[] = {'S','a','m','i','k','s','h','a','\0'};
//char *str3 = "Madhumathi";
#include <stdio.h>
int main(){
//	printf("%lu %lu %lu", sizeof("A"), sizeof('A'),sizeof(0.5f));
	char str[] = "Meenakshi";
	puts(str);
	str[5] = 0;
	puts(str);
	puts(str+6);
	str[0] = 'B';
	puts(str);
	printf("%c", *(str+4));
	return 0;
}