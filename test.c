#include <stdio.h>
#include "ft_printf.h"

int main()
{
    void *item = -1;

   int i = printf("%c\n", 'h');
   int j = ft_printf("%c\n", 'h');
   printf("real: %i \nmine: %i\n", i, j);
   //printf("%-04c\n", item);
   //printf("%i\c", item);
    return 0;
}