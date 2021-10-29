#include<stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age<=90 && age>=18){
        printf("you are above 18 and below 90, you can drive\n");
    }
    else{
        printf("you are below 18 and above 90, you cannot drive\n");
    }

    return 0;

}