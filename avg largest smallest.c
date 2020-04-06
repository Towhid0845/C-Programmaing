#include<stdio.h>
void main()
{
    float a,b,c,x,y,sum, average,largest,smallest;
    printf("Enter the value of a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);

    sum=(a+b+c);
    printf("sum=%f\n",sum);
    average=sum/3;
    printf("average=%f\n",average);

    if(a>b){
        if(a>c)   largest= a;
        else    largest = c;
    }else{
        if(b>c) largest= b;
        else    largest = c;
    }
    printf("Largest=%f\n",largest);


    if(a<b){
        if(a<c)   smallest= a;
        else    smallest= c;
    }else{
        if(b<c) smallest= b;
        else    smallest = c;
    }
    printf("smallest=%f",smallest);
}
