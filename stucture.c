#include<stdio.h>

struct Employee
{
    int id, salary, strcpy;
    char name[10];
}e1;

int main() {
    
    e1.id=1;
    e1.salary=10,000;

    strcpy(e1.name,"ABC");
    printf("Employee id : %d\n", e1.id);
    printf("Employee salary : %d\n", e1.salary);
    printf("Employee Name : %s\n", e1.name);

    return 0;
    
}       