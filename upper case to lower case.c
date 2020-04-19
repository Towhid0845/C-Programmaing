#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0;
    char str[10];
    printf("Please input a string: ");
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nLower Case String is: %s",str);
    return 0;
}
