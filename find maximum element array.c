#include <stdio.h>

int main()
{
    int arr[100], max, size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d integers: ", size);
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);

    }

    max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max  = arr[i];
        }
    }
    printf("Maximum element is %d.\n", max);

    return 0;
}
