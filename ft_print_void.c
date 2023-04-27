/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:58:50 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/27 12:19:34 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

ft_put_mem(int i, t_struct *ptr)
{
	int	i;
	char	*a;
	
	i = 0;
	if (i > 16)
	{
		ft_put_mem(i / 16, ptr);
		ft_put_mem(i % 16, ptr);
	}
	if (i <= 16)
	{
		a = i + 48;
		ptr->len += write (1, &a, 1);
	}
}

void	ft_print_void(t_struct *ptr)
{
	long long int	i;

	i = va_arg(ptr->arg, unsigned long long);
	ft_putstr("0x");
	ptr->len += 2;
	ft_put_mem(i, ptr);
}