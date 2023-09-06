#include <stdio.h>

int main()
{
    int ANSC = 9;
    int ANS;

    while (ANS) {
        printf("Problem:3*3=?\n");
        printf("ANS = ");
        scanf ("%d",&ANS);

        if (ANS == ANSC){
            printf("Yeah !!! \\\\(^0^)//");
            break;

        } else {
            printf("Wrong!!!\n");

        }
    }
    return 0;
}