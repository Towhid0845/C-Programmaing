#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,x,discriminant,root1,root2;
    printf("Input values of a, b and c of an equation ax^2 + bx + c : ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = b*b-4*a*c;

    if(a==0&&b==0)
        printf("No solution.\n");
    else if(a==0){
        x = -(c/b);
        printf("Root of the equation is:\nX = %f",x);
    }
    else if(discriminant<0)
        printf("Roots are imaginary\n");
    else{
        root1 = -b + sqrt(discriminant)/2*a;
        root2 = -b - sqrt(discriminant)/2*a;
        printf("Roots of the equation is:\nX = %f, %f",root1,root2);
    }
}
