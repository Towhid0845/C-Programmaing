#include <stdio.h>

int main()
{
    int i, a, sum = 0, arr[50], n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Please input the values: ");
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d",&a);
        arr[i] = a;
    }

    printf("Reverse order of array is: ");
    for( i = n - 1 ; i >= 0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
