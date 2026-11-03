#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char *str1 = NULL;
    char *str2 = NULL;

    size_t cap1 = 0;
    size_t cap2 = 0;

    ssize_t n1 = getline(&str1, &cap1, stdin);
    ssize_t n2 = getline(&str2, &cap2, stdin);

    int *count = calloc(256, sizeof(int));

    if(n1 < 0){ free(str1); return 1; }
    if(n2 < 0){ free(str2); return 1; }
    
    if(n1 > 0 && str1[n1 - 1] == '\n') str1[--n1] = '\0';
    if(n2 > 0 && str2[n2 - 1] == '\n') str2[--n2] = '\0';


    if(n1 != n2){
        return false;
    }

    size_t len = (size_t)n1;

    for(int i = 0; i < len; i++){
        count[(unsigned char)str1[i]]++;

    }

    for(int i = 0; i < len; i++){
        count[(unsigned char)str2[i]]--;

    }

    for (int i = 0; i < 256; i++){
        if (count[i] != 0){
            printf("false");
            return 0;
        }
    }
}