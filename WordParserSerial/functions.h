#include <stdbool.h>
#include<stdio.h>

// Function Prototypes
int stringLen(char *);
bool parseForHello(char input, char *key);




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


// parseForHello takes input char stream one char at a time, and outputs '1' when it
// receives the string stored in key[] as a continuous input sequence, else, it outputs '0'

bool parseForHello(char input, char *key){

    int strlen = stringLen(key);

    // Algo logic : Refer state machine diagram

}


