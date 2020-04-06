#include<stdio.h>
void main()
{
    int code,call;
    float bill;
    printf("Enter the numbers of call customer made: ");
    scanf("%d",&call);

    if(call<=100){
        bill=(call*1.25)+250;
        printf("Total Bill = %.2f",bill);
    }
    else if(call>100){
        bill=(((call-100)*2)+(call*1.25))+250;
        printf("Total Bill = %.2f",bill);
    }
 }
