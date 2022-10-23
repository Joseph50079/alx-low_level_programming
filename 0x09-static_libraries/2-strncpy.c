#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - function
 * @dest: destination parameter
 * @src: source string
 * @n: integer that determine how many sourece file string can be input to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
   int i = 0;
   
   while (src[i] != '\0')
   {
      if (i < n )
     {
       dest[i] = src[i];
     }
     i++;
   }
   
   dest[i] = '\0';
   
   return (dest);
}
