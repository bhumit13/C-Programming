#include<stdio.h>

int main() {
    
    int rev=0, rem, no;

    printf("Enter no\n");
    scanf("%d", &no);

    while (no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    
    printf("This no is reverse %d\n", rev);

    return 0;
    
}