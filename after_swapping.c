#include <stdio.h>
 
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d",  &a);
    
    printf("Enter the value of b\n");
    scanf("%d",  &b);
    
    c=a;
    a=b;
    b=c;
    
    printf("After swapping\n");
    printf("%d\n", a);
    printf("%d\n", b);
    
    return 0;
}

