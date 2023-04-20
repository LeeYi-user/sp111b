#include "putsp.h"

int main(void)
{
   char str[50];

   printf("Please enter a string: ");
   gets(str);
   putsp(str);

   return 0;
}
