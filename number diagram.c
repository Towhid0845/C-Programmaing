#include<stdio.h>
int main()
{
    int i,j,n;
    printf("please input value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

