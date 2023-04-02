/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:22:05 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/05 15:39:03 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_point_(size_t n)
{
	if (n > 15)
	{
		ft_print_point_(n / 16);
		ft_print_point_(n % 16);
	}
	else
		ft_print_char("0123456789abcdef"[n]);
}

int	ft_print_point(size_t n)
{
	size_t	numb;
	int		count;

	numb = n;
	count = 3;
	ft_print_str("0x");
	if (n == 0)
		return (ft_print_char('0') + 2);
	while (numb > 15)
	{
		numb /= 16;
		count++;
	}
	ft_print_point_(n);
	return (count);
}
