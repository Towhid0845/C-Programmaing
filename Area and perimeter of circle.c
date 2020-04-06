#include<stdio.h>
#include<math.h>

int main(){
    float x1,y1,x2,y2,r,pi=3.1416,P,area;
    printf("Input center and surface point of circle: ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("\nRadios : %f",r);
    area=pi*r*r;
    printf("\nArea : %f",area);
    P=2*pi*r;
    printf("\nPerimeter : %f",P);
    return 0;
}

