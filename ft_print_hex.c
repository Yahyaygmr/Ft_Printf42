/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:15:31 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/05 15:26:13 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_(unsigned int n, char c)
{
	if (n > 15)
	{
		ft_print_hex_((n / 16), c);
		ft_print_hex_((n % 16), c);
	}
	else
	{
		if (c == 'x')
			ft_print_char("0123456789abcdef"[n]);
		else
			ft_print_char("0123456789ABCDEF"[n]);
	}
}

int	ft_print_hex(unsigned int n, char c)
{
	unsigned int	numb;
	int				count;

	numb = n;
	count = 1;
	if (n == 0)
		return (ft_print_char('0'));
	while (numb > 15)
	{
		numb /= 16;
		count++;
	}
	ft_print_hex_(n, c);
	return (count);
}
