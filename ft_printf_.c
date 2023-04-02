/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:20:24 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/05 15:48:11 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_(va_list *arglist, char c)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*arglist, int)));
	if (c == 's')
		return (ft_print_str(va_arg(*arglist, char *)));
	if (c == 'p')
		return (ft_print_point(va_arg(*arglist, size_t)));
	if (c == 'd')
		return (ft_print_number(va_arg(*arglist, int)));
	if (c == 'u')
		return (ft_print_number_u(va_arg(*arglist, unsigned int)));
	if (c == 'i')
		return (ft_print_number(va_arg(*arglist, int)));
	if (c == 'x')
		return (ft_print_hex((va_arg(*arglist, unsigned int)), c));
	if (c == 'X')
		return (ft_print_hex((va_arg(*arglist, unsigned int)), c));
	if (c == '%')
		return (ft_print_char('%'));
	else
		return (0);
}
