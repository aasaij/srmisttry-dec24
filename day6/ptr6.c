#include <stdio.h>

int main(){
    int x,y,z;
    int *ptr;
    x = 10, y = 20, z = 30;
    ptr = &x;
    (*ptr)++;
    printf("%d\n", *ptr);
    ptr = &y;
    (*ptr)++;
    printf("%d\n", *ptr);
    ptr = &z;
    (*ptr)++;
    printf("%d\n", *ptr);
    
    return 0;
}