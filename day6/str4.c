#include <stdio.h>

int main(){

	char str[100];
//	scanf("%s", str);
// 	gets(str);
    // fgets(str, 9,stdin);
    
    // scanf("%[^\n]s",str);
    // scanf("%[a-zA-Z ]s", str)
    // scanf("%[^a-zA-Z ]s", str);
    scanf("%[+-0-9]s", str);
    // str[]
	printf("%s", str);
	return 0;
}