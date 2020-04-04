#include<stdio.h>
int main()
{
    int m,n=1;
    printf("Enter a number:\n");
    scanf("%d",&m);
    for(m;m>0;m--)
    {
        n=n*m;
    }
    printf("%d\n",n);
    return 0;
}

