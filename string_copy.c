#include<stdio.h>
#include<string.h>

int main() {
    
    char s1[10], s2[10];

    printf("Enter s1\n");
    scanf("%s", &s1);
    printf("Enter s2\n");
    scanf("%s", &s2);
    printf("string n copy: %s\n", strncpy(s1, s2, 1));

    return 0;
    
}