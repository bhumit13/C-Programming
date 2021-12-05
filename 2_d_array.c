#include<stdio.h>

int main() {
    
    int a[3][3], i, j;

    printf("Enter element into 3X3 matrix A:\n");

        for (i = 0; i < 3; i++)
        {
            
            for ( j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }
        

    return 0;
    
}