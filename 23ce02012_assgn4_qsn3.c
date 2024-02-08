#include <stdio.h>
int main(){
    int cred,curr;
    printf("enter credit score");
    scanf("%d",&cred);
    printf("enter current balance");
    scanf("%d",&curr);

    switch (cred>0 && cred<600?1:cred>600 && cred<750?2:3)
    {
    case 1:
    printf("intrest=%d",curr*15/100);
    break;
    case 2:
    printf("intrest=%d",curr*12/100);
    break;
    case 3:
    printf("intrest=%d",curr*10/100);

        break;
        }
        return 0;
}

