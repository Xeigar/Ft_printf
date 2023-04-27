/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_usgn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:58:36 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/27 12:49:48 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_utoa(unsigned int)
{

	
}

void	ft_print_usgn(t_struct *ptr)
{
	unsigned int	i;
	char	*p;
	
	i = va_arg(ptr->arg, unsigned int);
	p = ft_itoa(i);
	//fazer noutro file
	
}