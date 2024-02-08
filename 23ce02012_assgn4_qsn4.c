#include <stdio.h>
int main(){
    int x;
    printf("enter any number");
    scanf("%d",&x);

    switch (x==1?1:x==2?2:x==3?3:x==4?4:x==5?5:x==6?6:x==7?7:8)
    {
    case 1:
    printf("monday");

    break;

    case 2:
    printf("tuesday");
    break;

    case 3:
    printf("wednesday");

    break;

    case 4:
    printf("thursday");
    break;

    case 5:
    printf("friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("sunday");
    break;
    
    case 8:
    printf("incorrect input");
    


    
    
        break;
        return 0;
    }


    

}