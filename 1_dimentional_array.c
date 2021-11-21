#include<stdio.h>

int main() {
    
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Array element is %d\n", a[i]);
    }
    
    

    return 0;
    
}