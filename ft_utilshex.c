/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilshex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omourell <omourell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:32:50 by omourell          #+#    #+#             */
/*   Updated: 2026/10/29 14:49:27 by omourell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	char	*base;
	
	count = 0;
	if(uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if(n >= 16)
		count += ft_puthex(n / 16, uppercase);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int		count;
	
	count = 0;
	if(!ptr)
		return(ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr, 0);
	return (count);
}