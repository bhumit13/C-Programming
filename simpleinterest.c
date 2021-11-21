#include <stdio.h>

int main()
{
    int principal, rate, year;
    int simpleinterst = (principal * rate * year) / 100;
    printf("enter the value of princiapl \n");
    scanf("%d", &principal);

    printf("enter the value of rate \n");
    scanf("%d", &rate);

    printf("enter the value of year \n");
    scanf("%d", &year);

    printf("the value of simple interst is %d\n", simpleinterst = (principal * rate * year)/100);

    return 0;
}
