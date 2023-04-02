/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_u.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:03:41 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/05 16:06:46 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number_u_(unsigned int n)
{
	if (n > 9)
	{
		ft_print_number_u_(n / 10);
		ft_print_number_u_(n % 10);
	}
	else
		ft_print_char(n + 48);
}

int	ft_print_number_u(unsigned int n)
{
	int				count;
	unsigned int	numb;

	numb = n;
	count = 1;
	if (n == 0)
		return (ft_print_char('0'));
	while (numb > 9)
	{
		numb /= 10;
		count++;
	}
	ft_print_number_u_(n);
	return (count);
}
