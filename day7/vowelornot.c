#include <stdio.h>
#include <string.h>
//Program to check whether the given character is vowel or not
int main()
{
    char ch;
    scanf("%c", &ch);
    if (strchr("aeiouAEIOU", ch))
        printf("'%c' is vowel", ch);
    else
        printf("'%c' is not vowel", ch);

    return 0;
}