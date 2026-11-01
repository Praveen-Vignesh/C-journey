#include <stdio.h>
#include <stdlib.h>


void passbyvalue(int n){
    n = 98;
}

void passbyreference(int *n){
    *n = 99;
}

int main(int argc , char **argv){
    // & means "address of"
    // * means value of (de-referncing)

    int x = 42;
    printf("the address of the variable x is (&x): %p\n", &x);

    int * p = &x; // a pointer p which stores the memory address of x (42)
    // here * just says that p is a pointer type variable which points to a int type

    printf("the memory address store by the pointer p: %p\n", p);
    printf("the value after de-referncing the pointer p (*p): %d\n", *p); // here the * says go to the value which is stored by the pointer
    printf("the memory address of the poitner itself &p: %p\n", &p);

    int y = 5;

    passbyvalue(y);
    printf("after passing by value y becomes: %d\n", y);
    passbyreference(&y);
    printf("after pass by reference y becomes: %d\n", y);

    
}