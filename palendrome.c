#include <stdio.h>
#include <string.h>

int main()
{
    int i, length=0, end=0, mid=0, flag=0;
  	char str[100];

  	printf("Please Enter any String : ");
  	gets(str);

  	while(str[length]!='\0')
    {
        length++;
    }
    end=length-1;
    mid=length/2;
  	for(i=0;i<mid;i++)
	{
		if(str[i] != str[end])
		{
            printf("\n %s is Not a Palindrome String", str);
            flag = 1;
			break;
		}
		end--;
	}

	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}

  	return 0;
}
