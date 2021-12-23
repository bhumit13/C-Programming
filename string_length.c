#include<stdio.h>
#include<string.h>

int main() {
    
    char s1[10], s2[10];

    printf("Enter s1\n");
    scanf("%s", &s1);
    printf("Enter s2\n");
    scanf("%s", &s2);
    printf("length of string: %d\n", strlen(s1));

    return 0;
    
}