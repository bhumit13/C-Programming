#include<stdio.h>

int main() {
    
    int num, original, temp, sum=0;

    printf("Enter no\n");
    scanf("%d", &num);

    original=num;
    while (num>0)
    {
        temp=num%10;
        sum=sum+(temp*temp*temp);
        num=num/10;
    }
    
    if (sum==original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("not armstrong\n");
    }
    
    return 0;
    
}   