#include<stdio.h>
#include<string.h>

int main()
{
    int i,vowels=0,cons=0,digits=0;
    char str[50];
    printf("Please input a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
        str[i]=='o' || str[i]=='u' || str[i]=='A' ||
        str[i]=='E' || str[i]=='I' || str[i]=='O' ||
        str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            cons++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }

    }
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",cons);
    printf("\nDigits: %d",digits);

    return 0;
}
