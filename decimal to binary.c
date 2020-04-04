#include<stdio.h>
int main()
{
    int n,i=1,j,bin[100];
    printf("Enter decimal number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        bin[i++]=n%2;
        n=n/2;
    }
    printf("\nThe equavilint binary is :");
    for(j=i-1;j>0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}

