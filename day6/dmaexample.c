#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr, size=5;
    // scanf("%d", &size);
    // arr = (int *)malloc(size * sizeof(int));
    arr = (int*)calloc(size, sizeof(int));
    arr[0] = 100;
    arr[2] = 200;    
    size = 10;
    arr =(int *) realloc(arr, size * sizeof(int));
    arr[size-1] = 500;
    size = 3;
    arr =(int *) realloc(arr, size * sizeof(int));
    free(arr);
    return 0;
}