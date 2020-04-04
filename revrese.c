#include <stdio.h>
int main()
{
    int n,x,reverse=0;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("\n");
    while(n!=0)
    {
        x=n%10;
        reverse=reverse*10+x;
        n=n/10;
    }
        printf("The reverse number is:%d",reverse);
    return 0;
}

