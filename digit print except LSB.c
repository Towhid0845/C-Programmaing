#include<stdio.h>
#include<math.h>
int main(){
    int a,p=0,k,e,n,x;
    printf("Input the number : ");
    scanf("%d",&n);
    a=n;
    a=a/10;
    while(a>0){
        p++;
        a=a/10;
    }
    k=pow(10,p);
    e=n%k;
    while(e>10){
        e=n%k;
        k=k/10;
        printf("%d\n",e);
    }
    return 0;
}
