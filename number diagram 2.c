#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Please enter the value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

