#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Misbah";

    int length = strlen(name); //strlen is a function that returns the length of a string, excluding the null terminator.
    /* by not including the null termintor, i mean, that suppose a string is 5 characters, 
    but the actual length of the string in memory is 6, because of the null terminator at the end of the string, which is used to indicate the end of the string.*/

    // sizeof() also gets the length of the string, but it includes the null terminator, so it will return 6 for the string "Misbah".
    printf("The length of the string is: %d\n", length);
    printf("The size of the string is: %lu\n", sizeof(name) - 1); // -1 to exclude the null terminator


    //output 
    /*
    The length of the string is: 6
    The size of the string is: 6
    */


    // we cant concat 2 strings just with the + operator like in java
    //we have toa use the strcat() function from the string.h library.
    char firstname[] = "misbah ";
    char lastname [] = "khursheed";
    //option 1: using +

    //char fullname[] = firstname+lastname; 
    // this will give an error because we cant use + to concatenate strings in c

    //option 2: using strcat()
    char fullname[100] = ""; // make sure this is large enough to hold the concatenated string
    strcpy(fullname, firstname); // copy the first name into fullname ( we're copying here first to avoid memory crashes) , to avoid this, if we initialised firstname with more memory, we couldve just done strcat(firstname, lastname))
    strcat(fullname, lastname);
    printf("Full name: %s\n", fullname);


    //strmp() is like .equals() in java, it compares the true string and tells if they are equal or not.
    //whats pretty cool is , that if they ARENT equal, itll give a lexicographical difference between the strings, super cool shit : ) 

    printf("Comparison result: %d\n", strcmp(firstname, lastname));
    
}