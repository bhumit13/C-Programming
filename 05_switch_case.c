#include<stdio.h>

int main() {
    int rating;
    printf("Enter your rating (1-6)\n");
    scanf("%d", &rating);
    // switch (integer - expretion)
    switch (rating){
    // case 1, 2 & 3 -->constant 
    case 1:
    printf("your rating is 1\n");
    // break --> enter rating and your rating is 1 print your rating is 1 and break the code
        break;    
    case 2:
    printf("your rating is 2\n");
        break;
    case 3:
    printf("your rating is 3\n");
        break;
    case 4:
    printf("your rating is 4\n");
        break;
    case 5:
    printf("your rating is 5\n");
        break;
    case 6:
    printf("your rating is 6\n");
        break;    
    // default --> enter any(7,8,9..) rating print Invalid rating 
    default :
    printf("Invalid rating!\n");
        break;
    }    
    return 0;
}