#include <stdio.h>
int main(){
    int x;
    printf("enter any number");
    scanf("%d",&x);

    switch (x%2)
    {
    case 0:
        printf("%d is even number",x);
        break;
    case 1:
    printf("%d is odd number",x);
        break;    
    

    } 
    return 0;
}