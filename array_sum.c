#include<stdio.h>

int main() {
    
    int a[10], i, sum=0;

    printf("Enter Elements of Array :\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] :", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    
    printf("Elements of Array are :\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d] :%d\n", i, a[i]);
    }
    
    printf("Sum of all Element is %d\n", sum);

    return 0;
    
}