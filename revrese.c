#include<stdio.h>
int main()
{
    int p,q,r,s,n;
    printf("Input a Three digit number:");
    scanf("%d",&n);
    p=n%10;
    q=n/10;
    r=q%10;
    s=q/10;
    printf("The reverse number:%d%d%d",p,r,s);
    return 0;
}
