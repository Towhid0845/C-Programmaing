#include<stdio.h>
int main(){
    float c1,c2,gp1,gp2,cgpa;
    printf("Input credit and grade point: ");
    scanf("%f%f%f%f",&c1,&gp1,&c2,&gp2);
    cgpa = (c1*gp1+c2*gp2)/(c1+c2);
    printf("CGPA = %f",cgpa);
    return 0;
}
