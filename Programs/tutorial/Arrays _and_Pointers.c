#include <stdio.h>


int main(){
    int v[5] = {1, 2, 3, 4, 5}; //on declaration of array compiler allocates memory for 5 integers in a contiguous block of memory
    int *p = v;

    v[3] = 69;
    p[3] = 67;


    printf("%i %p\n", *(p), p);
    printf("%i %p\n", *(p+2), p+2);
}