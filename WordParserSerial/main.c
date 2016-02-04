// Word Parser bare-min
#include <stdbool.h>
#include<stdio.h>
#include "functions.h"
// Include definition headers here

// Key word definition as a constant
const char *key = "hello";

int main(){

//printf("StrLen = %d \n", stringLen(key));


while (true){

    char c;
    scanf("%c",&c);
    bool helloFound = parseForHello(c);
    if (helloFound)
        break;

}

return 0;
}



