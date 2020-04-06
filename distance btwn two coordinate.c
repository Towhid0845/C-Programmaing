#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,y1,y2,D;
    printf("Input coordinate of two point: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between two point is: %d",D);

    return 0;
}

