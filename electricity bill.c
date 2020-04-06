#include<stdio.h>
void main()
{
    float units,total,net;
    char name[15];
    printf("Input users name and units: ");
    scanf("%s%f",&name,&units);

    if(units>0 && units<=200){
        total=100+(0.80*units);
        printf("Total=%.3f",total);
    }
    else if(units<=300)
        total=100+(0.90*units);
    else if(units>300)
        total=100+(1.00*units);
    else if(total>400){
        net=(total+ total)*0.15;
        printf("Total=%.3f",net);
    }else
        printf("Total=%.3f",total);
}
