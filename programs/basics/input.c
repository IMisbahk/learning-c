#include <stdio.h>

int main() {
    int age = 0;
    char name[100] = ""; 
    char gender = '\0'; // null character to indicate an empty char

    printf("Enter Age:");
    //scanf() for user input, method i <stdio.h>  
    scanf("%d", &age);
    // & gives us the memory address of the variable, so we're taking an integer input and storing it at the address of age 
    printf("\n");

    printf("Enter Name:");
    scanf("%s", name);
    // printf("\n"); - dont need this after scanf cause it will by default move to the next line after taking input 

    printf("Enter Gender:");
    scanf(" %c", &gender); // note the space before %c to consume any leftover newline character
    printf("\n");

    
    printf("Age: %d\n", age);
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);

}