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
    fgets(name, sizeof(name), stdin);  
    // scanf("%s", name); ( wont take full name if it has spaces, it will only take the first word)
    // printf("\n"); - dont need this after scanf cause it will by default move to the next line after taking input 

    printf("Enter Gender:");
    scanf(" %c", &gender); // note the space before %c to consume any leftover newline character
    printf("\n");

    
    printf("Age: %d\n", age);
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);

    


    /*
    note: on inputting a string with spaces, scanf with %s will only read up to the first space- so like the first word only. 
    to overcome this, we can just do fgets(name, sizeof(name), stdin); instead of scanf for the name input. fgets will read the entire line including spaces
    */
}