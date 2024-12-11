//Program to convert s string into ToGgLe case
//input:
//	MaDhAn@123
//output
//	mAdHaN@123
#include <stdio.h>	
#include <ctype.h>
int main(){
	char str[100];
	scanf("%s", str);
	for(int index=0; str[index];index++){
		if (isupper(str[index]))
			str[index] = tolower(str[index]);
		else if (islower(str[index]))
			str[index] = toupper(str[index]);
	}
	puts(str);
	return 0;
}

