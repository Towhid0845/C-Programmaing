#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,S,Area;
    printf("Please enter sides of a triangle:");
    scanf("%f%f%f",&a,&b,&c);
    S=(a+b+c)/2;
    Area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area of the triangle is : %f",Area);
    return 0;
}
