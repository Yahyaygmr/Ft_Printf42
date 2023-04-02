/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:11:06 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/05 15:44:19 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	int		count;

	va_start(arglist, str);
	count = 0;
	while (*str)
	{
		if (*str != '%')
		{
			count += ft_print_char(*str);
			str++;
		}
		if (*str == '%')
		{
			str++;
			if (*str)
			{
				count += ft_printf_(&arglist, *str);
			}
			str++;
		}
	}
	va_end(arglist);
	return (count);
}
