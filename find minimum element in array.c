#include<stdio.h>
int main()
{
    int i,min,n,a,arr[20];
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Please input the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        arr[i]=a;
    }

    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]< min)
        {
            min=arr[i];
        }
    }
    printf("The minimum element is: %d",min);

    return 0;
}
