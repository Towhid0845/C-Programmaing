#include<stdio.h>
//#include<string.h>
#include<math.h>
void main()
{
    double v,x;
    char T=' ';
    printf("Enter value of x: ");
    scanf("%lf",&x);
    printf("Enter choice: \n");
    T=getch();

    if(T=='c'||T=='C'){
        x=(3.1416/180)*x;
        v=cos(x);
    }
    else if(T=='s'|| T=='S'){
        x=(3.1416/180)*x;
        v=sin(x);
    }
    else if(T=='t'||T=='T'){
        x=(3.1416/180)*x;
        v=tan(x);
    }
    else
        printf("Invalid value");

    printf("%lf",v);
}
