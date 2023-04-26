/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:17:34 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/25 18:33:17 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_struct *initialise_tab(t_struct *tab)                       
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->car = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->plus = 0;
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
	char *arr;

	arr = "cspduxX%%";
	i = 0;
	while(arr[i])
	{
		if (i == arr[i])
			return (0);
		i++;
	}
	return (1);
	
}

flag_check(t_struct *ptr, const char *txt, int i)
{
	while (descriptor_check(txt[i]) == 1)//fazer contagem na estrutura e envolver a acao dos plug ins
	{
		if (txt[i++] == '#')
			ptr->car = 1;
		if (txt[i++] == '-')
			ptr->dash = 1;
		if (txt[i++] == '0')
			ptr->zero = 1;
		if (txt[i++] == '+')
			ptr->plus = 1;
		if (txt[i++] == '.')
			ptr->pnt = 1;
		if (txt[i++] == ' ')
			ptr->sp = 1;
		if (txt[i] > '0' && txt[i] <= '9')
		{
			ptr->wdt = ft_atoi(txt + i);
			while(txt[i] > '0' && txt[i] <= '9')
				i++;
		}
	}
	if (txt[i] == 'c')
		ft_print_char(ptr);
	if (txt[i] == 's')
		ft_print_str(ptr);
	if (txt[i] == 'p')
		ft_print_void(ptr);
	if (txt[i] == 'd' || txt[i] == 'i')
		ft_print_int(ptr);
	if (txt[i] == 'u')
		ft_print_usgn(ptr);
	if (txt[i] == 'x')
		ft_print_hex(ptr);
	if (txt[i] == 'X')
		ft_print_Hex(ptr);
	if (txt[i] == '%')
		ft_print_per(ptr);
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
	va_end(ptr->arg);
}
