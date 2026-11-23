/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omourell <omourell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:47:26 by omourell          #+#    #+#             */
/*   Updated: 2026/10/29 12:16:47 by omourell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, ...)
{
	va_list		va;
	int			counter;

	if(!str)
		return(NULL);
	counter = 0;
	va_start(va, str);
	while(*str)
	{
		if(*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return(counter);
}
