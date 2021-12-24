#include<stdio.h>
#include<string.h>

int main() {
    
    char s1[10],s2[10];
    printf("enter s1 : ");
    scanf("%s",s1);
    printf("enter s2 : ");
    scanf("%s",s2);
    printf("string concat:%s\n",strcat(s1,s2));

    return 0;
    
}