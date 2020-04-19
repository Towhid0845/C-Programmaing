#include <stdio.h>

int main()
{
   char s[100], r[100];
   int j, size, i = 0;

   printf("Input a text: ");
   gets(s);

   while (s[i] != '\0')
      i++;

   size = i - 1;

   for (j = 0; j < i; j++) {
      r[j] = s[size];
      size--;
   }

   r[j] = '\0';

   printf("The reverse text is: %s\n", r);

   return 0;
}
