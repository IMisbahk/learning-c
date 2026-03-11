//testing out variables and doing shit with maths


#include <stdio.h>

int main() { 
   

    // variable types include
    // char - one single byte
    // int - 16/32 bit integers ( range from -32,768 to 32,767 )
    // short - 16 bit integers ( range from -32,768 to 32,767 )
    // long - 32 bit integers ( range from -2,147,483,648 to 2,147,483,647 )
    // float - 32 bit floating point numbers
    // double - 64 bit floating point numbers

    int age = 18;
    short grade = 85;// no S required
    long salary = 50000L; //L to indicate a long integer
    float height = 5.9F; //F to indicate a float (not like the Final in java)
    double weight = 150.5; //no D required


    //we dont have string as a datatype like we do in other languages, but we can make one with i guess an array of characters as char name[] = "misbah"
    char name[] = "misbah";

    //testing 
    printf("Name: %s\n", name); 
    printf("Age: %d\n", age);
    printf("Grade: %d\n", grade);
    printf("Salary: %ld\n", salary);
    printf("Height: %.1f\n", height);
    printf("Weight: %.1f\n", weight); 



    //var arithmetic

        int a = 10;
        int b = 5;
    
        int sum = a + b; 
        int difference = a - b;
        int product = a * b;
        int quotient = a / b;
        int remainder = a % b; // modulus operator gives the remainder of the division
        int increment = a++; // post-increment, returns a then increments
        int decrement = b--; // post-decrement, returns b then decrements
        int exponentiation; //this sucks, C doesnt have the ** operator like python, we have to use the pow() function from math.h
    
        printf("Sum: %i\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %d\n", quotient); // this %d or %i thing im using is just a placeholder, both are used for integers, but %d is more commonly used, and %i is used for input
        printf("Remainder: %d\n", remainder);
        printf("Increment: %d\n", increment); // this will print 10, then increment a to 11
        printf("Decrement: %d\n", decrement); // this will print 5, then decrement b to 4


    double pi = 3.14159265358979323846; 
    printf("Pi: %lf\n", pi); //this printed only till 6 decimal places, cause thats the default behaviour of c
    //if we want more, we can just do .15lf  
    printf("Pi with more decimals: %.15lf\n", pi); //this will print pi with 15 decimal places

}
