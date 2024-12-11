//Program to convert s string into ToGgLe case
//input:
//	MaDhAn@123
//output
//	mAdHaN@123
#include <stdio.h>	

int main(){
	char str[100];
	scanf("%s", str);
	for(int index=0; str[index];index++){
		if (str[index]>='A' && str[index]<='Z')
			str[index] +=  32;
		else if (str[index]>='a' && str[index]<='z')
			str[index] -=  32;
	}
	puts(str);
	return 0;
}

