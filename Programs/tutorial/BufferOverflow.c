#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 10

char buffer[BUFFERSIZE] = "Message";
char password[BUFFERSIZE] = "passw0rd";

int main(int argc, char **argv){
    if(argc != 3){
        printf("usage: <password> <string_to_print>\n");
        exit(1);
    }

    strcpy(buffer, argv[2]);

    if(strcmp(argv[1], password) == 0){
        printf("password checks out \n");
        printf("message: %s\n", buffer);
    } else{
        printf("password error \n");
    }

    // Now since password and buffer sits right next to each other in memory
    // strcpy evnetually starts over writing the password's memory locations
    // giving us memory over flow and the program will allow users even when the password is wrong
    // to fix this we could use 
    // strncpy (slower than strcpy)
    // strncpy alows a extra argument which tells it to copy only said no of byte
}