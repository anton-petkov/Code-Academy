#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
   char str[] ="HELLO";
   for (int i = 0; i < strlen(str); i++)
   {
       printf("%c",tolower(str[i]));
   }
   

   
    return 0;
}
