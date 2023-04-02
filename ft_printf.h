/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:27:12 by yyagmur           #+#    #+#             */
/*   Updated: 2023/01/06 14:46:06 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_print_char(int c);
int	ft_print_str(const char *c);
int	ft_print_number(int n);
int	ft_strlen(const char *s);
int	ft_printf(const char *str, ...);
int	ft_printf_(va_list *arglist, char c);
int	ft_print_number_u(unsigned int n);
int	ft_print_hex(unsigned int n, char c);
int	ft_print_point(size_t n);
#endif
