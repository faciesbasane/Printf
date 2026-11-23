/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omourell <omourell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:20:50 by omourell          #+#    #+#             */
/*   Updated: 2026/10/29 14:00:09 by omourell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(const char *str)
{
	int		i;
	
	if(!str)
		return (ft_putstr("(null)");
	i = 0;
	while(str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_putunbr(unsigned int n)
{
	int		count;
	
	count = 0;
	if(n >= 10)
		count += ft_putunbr(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}