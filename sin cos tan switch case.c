#include<stdio.h>
void main()
{
    double v,x;
    char T=' ';
    printf("Enter angle x: ");
    scanf("%lf",&x);
    printf("Enter choice: \n");
    T=getch();

    switch(T){
        case 's':
            x = (3.1416/180)*x;
            v=sin(x); break;
        case 'S':
            x = (3.1416/180)*x;
            v=sin(x);  break;
        case 'c':
            x = (3.1416/180)*x;
            v=cos(x); break;
        case 'C':
            x = (3.1416/180)*x;
            v=cos(x); break;
        case 't':
            x = (3.1416/180)*x;
            v=tan(x); break;
        case 'T':
            x = (3.1416/180)*x;
            v=tan(x); break;
    default:
        printf("Invalid value");
    }
    printf("%lf degree",v);
}
