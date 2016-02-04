#include <stdbool.h>
#include<stdio.h>
//#include "functions.h"
//#include "functions.h"
// Function Prototypes
int stringLen(char *);
bool parseForHello( char *key, char input);
int stateFinder( char *key, char input); // outputs state info
// Auto variable declaration
int presentState = 0;
int *ptr=0;
// Key word definition as a constant
char key[] = "hello";
int main(){
    while (1){
    char c;
    scanf(" %c",&c);
    //printf("%c", c);
    bool helloFound = parseForHello( key, c);
    if (helloFound){
        printf("Hello Found! \n");
        break;
    }
    }
}
// Function definitions..
int stringLen(char *base){
// Calculates the length of a string. Takes string's base address' pointer as input and returns
// number of characters in the string excluding '/0'
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
bool parseForHello( char *key, char input){
// parseForHello takes input char stream one char at a time, and outputs '1' when it
// receives the string stored in key[] as a continuous input sequence, else, it outputs '0'
    int lastState = stringLen(key);
    // Algo logic : Refer state machine diagram
    presentState = stateFinder( key, input);

    if (presentState == lastState)
        return 1;
    else
        return 0;
}
int stateFinder( char *key, char input){
// Takes presentState (default 0), input sequence and key string as input
// Outputs nextState based on presentState and inputs
// When nextState = last state, parseForHello processes that and outputs '1'
    int lastState = stringLen(key) - 1;
    if (input == key[presentState]){
        presentState = presentState + 1;
        printf("\n State: %d -1 \n", presentState);
        return presentState;
    }
    else {
        presentState = 0;
        printf("\n State: %d -2 \n", presentState);
        return presentState;
        }

}
