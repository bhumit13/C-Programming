#include<stdio.h>

int main() {
    
    int a[5], sum=0, avg, i;

    for(i=0; i<5; i++){

        scanf("%d", &a[i]);
        sum=sum+a[i];
    }

    avg=sum-5;
    printf("sum=%d\n avg=%d\n", sum, avg);

    return 0;
    
}