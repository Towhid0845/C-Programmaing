#include<stdio.h>

int main(){
    float a,b,sum,sub,mul,div;
    printf("Input two number: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Summation=%f\n",sum);
    printf("Subtraction=%f\n",sub);
    printf("Multiplication=%f\n",mul);
    printf("Division=%f\n",div);
    return 0;
}
