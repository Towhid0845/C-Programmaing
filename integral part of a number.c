#include<stdio.h>

int main(){
    int digit=0;
    float x,a;
    printf("Input a float number: ");
    scanf("%f",&x);
    digit=x;
    a=digit%100;
    printf("Two most integral part of the number is: %.0f",a);
    return 0;
}
