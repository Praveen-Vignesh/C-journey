#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5
// const int ARRAY_LENGTH = 5;

void printarray(int *arr, int length){
    for(int i = 0; i < length; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char **argv){
    int a[ARRAY_LENGTH] = {1, 2, 3, 4, 5}; //memory allocated in declaration and definition
    int *p = malloc(sizeof(int) * 5); // using malloc to allocate memory epace for 100 integer as array (use calloc for 0's)

    p[4] = 1;

    p = realloc(p, sizeof(int) * 10); // reallocation of memory for the same variable (resizing of array)

    printarray(a, ARRAY_LENGTH);
    printarray(p, 10);

    free(p);

}