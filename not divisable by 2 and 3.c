#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0&&i%3!=0)
            printf("%d ",i);
    }printf("\n");
    return 0;
}

