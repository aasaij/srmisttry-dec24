//Program to demonstrate function
#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include<ctype.h>
bool isVowel(char ch){
	return strchr("aeiouAEIOU", ch)!=NULL;
}
bool isConsonant(char ch){
	return isalpha(ch) && !isVowel(ch);
}
int main(){
//	int isConsonant(char);
	char ch;
	scanf("%c", &ch);
	if (isConsonant(ch))
		printf("'%c' is consonant!", ch);
	else
		printf("'%c' is not a consonant!", ch);
	return 0;
}
//int isConsonant(char ch){
//	if(toupper(ch) <'A'|| toupper(ch) >'Z') return 0;
//	switch(toupper(ch)){
//		case 'A' : case 'E' : case 'I':case 'O': case 'U':
//			return 0;
//		default : return 1;
//	}
//	return 1;
//}