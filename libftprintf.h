#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct s_struct
{
	va_list	arg;     // arg to print out
	int	wdt;        // width
	int	car;
	int	zero;       // zero padding
	int	pnt;        // .
	int	dash;       // -
	int	plus;       // +    pos or neg number  
	int	perc;       // %
	int	sp;         // space flag ' '
	int len;
}   t_struct;

#endif