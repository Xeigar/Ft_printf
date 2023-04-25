/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:17:34 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/25 18:18:36 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_struct *initialise_tab(t_struct *tab)                       
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int	descriptor_check(char i)
{
	int		i;
	char arr[6];

	arr[0] = '-';
	arr[1] = '0';
	arr[2] = '.';
	arr[3] = '#';
	arr[4] = ' ';
	arr[5] = '+';
	i = 0;
	while(arr[i])
	{
		if (i == arr[i])
			return (1);
		i++;
	}
	return (0);
	
}

flag_check(const char *txt, int i)
{
	while (descriptor_check(txt[i]) == 1)
	{
		//fazer contagem na estrutura e envolver a acao dos plug ins		
	}
	
}

int	ft_printf(const char *txt,...)
{
	int	i;
	t_struct	*ptr;

	ptr =(t_struct *)malloc(sizeof(* ptr));
	if (!ptr)
		return (- 1);
	va_start(ptr->arg, txt);
	initialise_tab(ptr);
	while(txt[i])
	{
		if (txt[i] == '%')
			A;//Function to check the next caracters;
		else
			write(1, &txt[i], 1);
		initialise_tab(ptr);
		i++;
	}


}
