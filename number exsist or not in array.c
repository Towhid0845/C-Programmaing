#include <stdio.h>
int main()
{
    int arr[50];
    int i, Search, found=0,n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Please input the values: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &Search);

    for(i=0; i<n; i++)
    {
        if(arr[i] == Search)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", Search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array",Search);
    }

    return 0;
}
