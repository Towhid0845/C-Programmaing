#include <stdio.h>
int main()
{
    int n,i=0,x=0,y=1,z;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("\n");
    printf("Fibonacci series=");
    do{
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
        i++;
    }while(i<=n);
    return 0;
}

