#include<stdio.h>
void main()
{
    int r,m,c,p,b;
    printf("Input Mathematics,Physics and Chemistry : ");
    scanf("%d%d%d",&m,&p,&c);
    r=m+p+c;
    b=m+p;

    if(m>=60 && p>=50 && c>=40 && r>=200 && b>=150)
        printf("The candidate is eligible");
    else
        printf("The candidate is not eligible");
}

