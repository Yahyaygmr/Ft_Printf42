/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:41:17 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/06 14:43:20 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number_(int n)
{
	if (n >= 10)
	{
		ft_print_number_(n / 10);
		ft_print_number_(n % 10);
	}
	else
		ft_print_char(n + 48);
}

int	ft_print_number(int n)
{
	int	count;
	int	numb;

	count = 1;
	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_print_char('-');
		count++;
	}
	numb = n;
	while (n >= 10)
	{
		n /= 10;
		count ++;
	}
	ft_print_number_(numb);
	return (count);
}
