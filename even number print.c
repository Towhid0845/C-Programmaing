#include<stdio.h>
int main()
{
    int i=1;
    printf("Even number=\n");
    for(i=0;i<100;i++)
    {
        if(i%2==0)
            printf("%d  ",i);
    }
    return 0;
}

