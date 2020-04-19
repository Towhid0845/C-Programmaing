#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, y, m, sum=0, r;
    printf("Please enter a number: ");
    scanf("%d",&n);
    x = n ;
    y = n ;
    m = 0 ;
    while(n!=0)
    {
        n=n/10;
        m++;
    }
    while(x!=0)
    {
        r=x%10;
        sum = sum + pow(r,m);
        x=x/10;
    }
    if(sum == y)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}
