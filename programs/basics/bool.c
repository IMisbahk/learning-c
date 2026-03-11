#include <stdio.h>
#include <stdbool.h> //header file for bool datatype


int main() {
    //in variables.c we covered int short long float double char and also string, but we didnt cover bool.
    //for the bool datatype we need to add the stdbool.h header file
    bool male = true; //true and false are the only two values for bool, they are actually defined as 1 and 0 respectively in stdbool.h

    printf("Male: %d\n", male);


    if (male) { //we can use the bool variable in an if statement, it will evaluate to true
        printf("You are a male.\n");
    } else {
        printf("You are not a male.\n");
    }
    return 0;
}

