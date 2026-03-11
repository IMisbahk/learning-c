#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int operation = 0;


}

int add (int a, int b) {
    return a+b;
}

int subtract (int a, int b) {
    return a-b;
}

int multiply (int a, int b) {
    return a*b;
}   
int divide (int a, int b) {
    if (b == 0) {
        printf("u can't divide by zero.\n");
        return 0; 
    }
    return a/b;
}
int remainder (int a, int b) {
    if (b == 0) {
        printf("u can't divide by zero.\n");
        return 0; 
    }
    return a%b;
}
int trigonometry (int a, char op, int b) {
    switch (op) {
        case 's':
            return sin(a);
            break;
        case 'c':
            return cos(a);
            break;
        case 't':
            return tan(a);
            break;
        case 'a':
            return asin(a);
            break;  
        case 'o':
            return acos(a);
            break;
        case 'n':
            return atan(a);
            break;
        default:
            printf("Invalid operator for trigonometry. Use 's' for sine, 'c' for cosine, and 't' for tangent.\n");
            break;
            return 0;
    };

}
