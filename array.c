#include<stdio.h>

int main() {
    
    int a[10], i;
    printf("Enter Elements of Array :\n");
    

    for(i=0; i<10; i++){
        printf("Enter the value of a[%d] :", i);
        scanf("%d", &a[i]);
    }

    printf("Elements of Array are :\n");
    for (i = 0; i < 10; i++){
        printf("a[%d] :%d\n", i, a[i]);
    }

    return 0;
    
}