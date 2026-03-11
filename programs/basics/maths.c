#include <stdio.h>
#include <math.h> //header file for math functions

int main() {

    double x = 15.0;
    int y = 10;

    //basic math operations
    x = x + y; // addition
    x = x - y; // subtraction
    x = x * y; // multiplication
    x = x / y; // division
    x = fmod(x, y); // fmod() function to find the remainder of division
    x = pow(x, y); // pow() function to find x raised to the power of y
    x = sqrt(x); // sqrt() function to find the square root of x
    x = log(x); // log() function to find the natural logarithm of x
    x = exp(x); // exp() function to find the exponential of x (e^x)

    // min and max functions
    x = fmin(x, y); // fmin() function to find the minimum of x and y
    x = fmax(x, y); // fmax() function to find the maximum of x and y

    // trigonometric functions
    x = sin(x); // sin() function to find the sine of x (x in radians)
    x = cos(x); // cos() function to find the cosine of x (x in radians)
    x = tan(x); // tan() function to find the tangent of x (x in radians)
    x = asin(x); // asin() function to find the arcsine of x (result in radians) - basically inverse of a trig function
    x = acos(x); // acos() function to find the arccosine of x (result in radians)
    x = atan(x); // atan() function to find the arctangent of x (result in radians) 
   
    return 0;

}