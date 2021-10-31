#include<stdio.h>

int main() {
    
    int a, b, c;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    if(a>b){
        if(a>c){
            printf("a is max\n");
        }
        else{
            printf("c is max\n");
        }
    }
    else{
        if(b>c){
            printf("b is max\n");
        }
        else{
            printf("c is max\n");
        }
    }

    return 0;
    
}