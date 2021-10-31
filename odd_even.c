#include<stdio.h>

int main() {
    
    int n1;
    
    printf("Enter the value of n1\n");
    scanf("%d",&n1);

    if(n1%2==0){
        printf("This no is even\n");
    } 
    else{
        printf("This no is odd\n");
    }

    return 0;
    
}
