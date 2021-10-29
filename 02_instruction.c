#include<stdio.h>

int main() {
    int physics, english, maths;
    float avarage;

    printf("Enter physics marks\n");
    scanf("%d", &physics);

    printf("Enter english marks\n");
    scanf("%d", &english);

    printf("Enter maths marks\n");
    scanf("%d", &maths);

    avarage = (physics + english + maths) / 3;
    if ((avarage < 40) || physics < 45 || english < 45 || maths < 45 ) {
        printf("Your total percentage is %f and you are fail\n", avarage);
    }
    else {
        printf("Your total percentage is %f and you are pass\n", avarage);
    }

    return 0;
}
