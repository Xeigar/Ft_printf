#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdlib.h>

typedef struct s_struct
{
	va_list  arg;     // arg to print out
	int   wdt;        // width
	int   prc;        // precision
	int   zero;       // zero padding
	int   pnt;        // .
	int   dash;       // -
	
	int   sign;       // pos or neg number  
	int   is_zero;    // is number zero  
	int   perc;       // %
	int   sp;         // space flag ' '
	int   tl;         // total_length (return value)
}   t_struct;

#endif