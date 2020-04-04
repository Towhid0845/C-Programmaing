#include <stdio.h>
int main()
{
    int n,i,age[100],count=0;
    printf("Please enter number of people : ");
    scanf("%d",&n);
    printf("\nEnter ages:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&age[i]);
    }
    for(i=0;i<n;i++)
    {
        if(age[i]>=50&&age[i]<=60)
            count=count+1;
    }
    printf("\nThe number of people between 50 to 60 is =%d",count);
    return 0;
}

