/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:28:10 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/27 13:38:57 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_char(t_struct *ptr)
{
	char	c;

	c = va_arg(ptr->arg, char);
	ptr->len += write(1, &c, 1);
}

void	ft_print_str(t_struct *ptr)
{
	char	*c;

	c = va_arg(ptr->arg, char *);
	ptr->len = ft_strlen(c);
	ft_putstr_fd(c, 1);
}

void	ft_print_int(t_struct *ptr)
{
	int	i;
	char	*p;

	i = va_arg(ptr->arg, int);
	p = ft_itoa(i);
	ptr->len = ft_strlen(p);
	ft_putstr_fd(p, 1);
	free(p);
}

void	ft_print_per(t_struct *ptr)
{
	ft_putchar('%');
	ptr->len = 1;
}