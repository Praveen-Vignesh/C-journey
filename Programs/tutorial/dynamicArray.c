#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int *data;
        size_t length;
        size_t capacity;

    } Array;


void push(Array *arr, int newElement){
    if(arr->length == arr->capacity){
        size_t new_cap = (arr->capacity == 0) ? 4 : (arr->capacity*2);
        int *temp = realloc(arr->data, sizeof(int)*new_cap);

        arr->data = temp;
        arr->capacity = new_cap;
    }

    arr->data[arr->length++] = newElement;
}

int main(){
    
    Array myArray;

    myArray.data = NULL;
    myArray.capacity = 0;
    myArray.length = 0;

    push(&myArray, 10);
    push(&myArray, 20);
    push(&myArray, 30);
    push(&myArray, 40);
    push(&myArray, 50);
    push(&myArray, 60);
    push(&myArray, 70);
    push(&myArray, 80);

    for(int i = 0; i < myArray.length; i++){
        printf("%d\n", myArray.data[i]);
    }

    free(myArray.data);

}