//Program to count vowels in a string
#include <stdio.h>
#include <ctype.h>
int main(){
	char str[100];
	int cnt=0;
	scanf("%[^\n]s", str);
	for(int index = 0; str[index];index++){
		switch(toupper(str[index])){
			case 'A': case 'E': case 'I': case 'O': case 'U':
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}