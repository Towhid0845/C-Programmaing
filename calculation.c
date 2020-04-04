#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,p,q,m,n,r;
    printf("Please enter the number:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=b*d;
    p=x/b;
    q=x/d;
    y=(p*a)+(q*c);
    z=(p*a)-(q*c);
    m=a*c;
    n=a*d;
    r=b*c;
    printf("Addition:%d/%d\n",y,x);
    printf("Subtraction:%d/%d\n",z,x);
    printf("Multiplication:%d/%d\n",m,x);
    printf("Division:%d/%d",n,r);
    return 0;
}

