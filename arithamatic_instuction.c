#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    int b = 5;
    int z = a + b;
    
    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value of a/b is %d\n", a / b);
    printf("The value of z is %d\n", z);
    printf("when 5 is divided by 2 leaves a reminder of  %d\n", 5 % 2);
    printf("when -5 is divided by 2 leaves a reminder of  %d\n", -5 % 2);
    printf("when 5 is divided by -2 leaves a reminder of  %d\n", 5 % -2);
    printf("the value of 4 * 5 is %d\n", 4 * 5);
    printf("the value of 4 to the power 5 is %f\n", pow(4, 5));
    printf("the value of 6+5 is %d\n", 6 + 5);

    return 0;
}