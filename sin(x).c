#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    int angle;
    float x,y;
    for(angle=0;angle<=180;angle=angle+15)
    {
        x=(pi/180)*angle;
        printf("\nThe angle is=%d ",angle);
        y=sin(x);
        printf("\nThe result is=%.4f",y);
    }
    return 0;
}

