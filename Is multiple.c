#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter m & n, where m >= n : ");
    scanf("%d %d",&m,&n);
    if(m%n==0)
        printf("m is a multiple of n");
    else
        printf("m is not a multiple of n");
    return 0;
}

