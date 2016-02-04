
#include<stdio.h>

// Function Prototypes
int stringLen(char *);




// Function definitions..

// Calculates the length of a string. Takes string's base address' pointer as input and returns
// number of characters in the string excluding '/0'

int stringLen(char *base){

    int len=0;
    while (1){
    if(*base != '\0'){
        base = base +1; // Compiler independent
        len = len + 1;
    }

    else
        {
            return len;
            break;
        }
    }
}
