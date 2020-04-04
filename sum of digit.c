#include <stdio.h>
int main()
{
    int n,x,sum=0;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("\n");
    while(n!=0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
        printf("The sum of the disits of a given number is:%d",sum);
    return 0;
}

