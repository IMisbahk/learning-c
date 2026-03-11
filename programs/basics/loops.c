#include <stdio.h>

int main () {
    //pretty much same to java
    // we have 2 tyes of loops

    // entry and exit controlled loops

    // entry controlled loops
    // for loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);  
    }
    // while loop
    int j = 0;
    while (j < 5) {
        printf("%d ", j);
        j++;
    }

    // exit controlled loops
    // do while loop
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while (k < 5);
    
    
}