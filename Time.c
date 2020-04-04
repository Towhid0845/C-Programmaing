#include<stdio.h>
int main()
{
    int h,m,s,x,n;
    printf("Input a number in second:");
    scanf("%d",&n);
    h=n/3600;
    x=n%3600;
    m=x/60;
    s=x%60;
    printf("Time= %dHour,%dMin,%dSec",h,m,s);
    return 0;
}
