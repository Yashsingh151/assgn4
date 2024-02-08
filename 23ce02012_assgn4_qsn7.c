#include <stdio.h>
int main(){
    int age,x=50;
    printf("Enter age\n");
    scanf("%d",&age);

    if (age>0 && age<5 )
    printf("Ticket is free");

    else if (age>=5 && age<=12)
    printf("Ticket price is 20");

    else if (age>=13 && age<=59)
    printf("Ticket price is 50");

    else if ("age>=60")
    printf("Ticket price is %d ",x*80/100);

    return 0;

}