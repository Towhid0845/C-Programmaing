#include <stdio.h>
#include<math.h>
int main()
{
    int P,n;
    float r,V;
    printf("P:");
    for(P=1000;P<=10000;P=P+1000)
    {
        printf("%d ",P);
    }
    printf("\n\nr:");
    for(r=0.10;r<0.21;r=r+0.01)
    {
        printf("%.2f ",r);
    }
    printf("\n\nn:");
    for(n=1;n<=10;n++)
    {
        printf("%d ",n);
    }
    printf("\nEnter value of P : ");
    scanf("%d",&P);
    V=P*pow((1+r),n);
    printf("\nThe result is =%.2f",V);
    return 0;
}

