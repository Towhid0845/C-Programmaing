#include<stdio.h>

int check_perfect(int num);

int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    check_perfect(n);
    return 0;
}

int check_perfect(int n)
{
    int i,j,sum=0, add=0;
    for(i = 1 ; i < n ; i++)
    {
            if(n%i==0)
                sum=sum+i;
    }
    if(sum==n)
        printf("%d is perfect number.",i);
    else
        printf("Not a perfect number.");

    return 0;
}
