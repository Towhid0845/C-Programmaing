#include<stdio.h>
int main()
{
    int n,i=1,b=0;
    printf("Enter any number: ");
    scanf("%d",&n);

    while(i<=n){
        if((n%i)==0)
            b=b+1;
        i=i+1;
    }
    if(b==2){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }
    return 0;
}
