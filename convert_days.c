#include<stdio.h>

int main() {
    
    int days, months, years, d;

    printf("Enter days\n");
    scanf("%d", &days);

    years = days/365;
    months = (days-years*365)/30;
    d = (days-years*365-months*30);

    printf("your years is %d\n", years);
    printf("your months is %d\n",months);
    printf("your days is %d\n", d);

    return 0;
    
}