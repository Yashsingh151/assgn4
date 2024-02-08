#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    switch (a>b&&a>c?1:b>c&&b>a?2:3)
    {
    case 1:
    printf("%d is largest",a);
    case 2:
    printf("%d is largest",b);
    case 3:
    printf("%d is largest",c);


        break;
    
    return 0;
    }
}
