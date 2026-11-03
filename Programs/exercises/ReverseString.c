#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str, size_t start, size_t end){
    if(start >= end) return;           /* 0 or 1 chars: nothing to swap */
    size_t l = start, r = end;
    while(l < r){
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++; r--;
    }
}

int main(){
    char *myString = NULL;
    size_t cap = 0;
 
    printf("Enter the string: ");
    ssize_t n = getline(&myString, &cap, stdin);
    if(n < 0){ free(myString); return 1; }

    if(n > 0 && myString[n - 1] == '\n') myString[--n] = '\0';
 
    size_t len = (size_t)n;

    if(len > 0){
        reverse(myString, 0, len - 1);

        size_t wordStart = 0;
        for(size_t i = 0; i <= len; i++){
            if(i == len || myString[i] == ' '){
                if(i > wordStart) reverse(myString, wordStart, i - 1);
                wordStart = i + 1;
            }
        }
    }

    printf("Your reversed string is {%s}\n", myString);

    free(myString);
    

    
}


 