#include<stdio.h>

struct Student
{
    int id;
    char name[10];
} s[5];

int main() {
    
    int i;
    printf("Enter Student detail\n");
    
    for (i = 1; i <= 5; i++)
    {
        printf("Enter id\n");
        scanf("%d", &s[i].id);
        printf("Enter Name\n");
        scanf("%s", s[i].name);
    }

    return 0;
    
}