#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a Binod to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the Binod: %s\n", s);

   return 0;
}