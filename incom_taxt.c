#include<stdio.h>

int main() {
    float tax = 0, income;
    printf("enter your income\n");
    scanf("%f", &income);

    if(income>=300000 && income<=600000){
        tax = tax + 0.05 * (income-300000); 
    }
    if(income>=600000 && income<=900000){
        tax = tax + 0.20 * (income-600000); 
    }
    if(income>=120000){
        tax = tax + 0.50 * (income-120000); 
    }
    printf("Your net income tax to be paid 26th of this month is %f\n", tax);

    return 0;

}