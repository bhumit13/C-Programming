#include<stdio.h>

int main() {
    
    float celsius, far;

    printf("Enter the value of celsius\n");
    scanf("%f", &celsius);

    far= (celsius*9/5)+32;

    printf("The value of this celsius temperature in Fahrenheit is %f\n", far);
    
    return 0;
    
}