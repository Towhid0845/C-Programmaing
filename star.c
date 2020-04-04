#include <stdio.h>
int main()
{
    int n,i=1,j=1;
    printf("Please enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

