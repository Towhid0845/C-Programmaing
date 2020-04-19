#include <stdio.h>
int main()
{
    int n, i, range;
    printf("Input an integer: ");
    scanf("%d",&n);
    printf("Enter the range: ");
    scanf("%d", &range);
    printf("Time Table:\n");
    for(i=1; i <= range; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}
