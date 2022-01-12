#include<stdio.h>

union Student
{
    int id, marks;
    char name[10], address[10];
}s1;

int main() {
    
    printf("Enter id\n");
    scanf("%d", &s1.id);
    printf("Enter marks\n");
    scanf("%d", &s1.marks);
    printf("Enter name\n");
    scanf("%s", &s1.name);
    printf("Enter address\n");
    scanf("%s", &s1.address);

    return 0;
    
}

