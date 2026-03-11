#include <stdio.h>

int main() {
    //cool stuff ahead :)

    //pointer is basically just another variable that is used to store the MEMORY ADDRESS of another variable.
    int a = 10; // normal variable
    int *p = &a; // pointer variable that stores the memory address of a
    printf("Value of a: %d\n", a); // prints the value of a
    printf("Memory address of a: %p\n", p); // prints the memory
}