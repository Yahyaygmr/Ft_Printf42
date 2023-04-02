/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:37:30 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/06 14:44:56 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *c)
{
	int	count;

	count = 0;
	if (c)
	{
		while (*c)
		{
			count += ft_print_char(*c);
			c++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (count);
}
