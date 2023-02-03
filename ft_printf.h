/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:32:25 by ncolliot          #+#    #+#             */
/*   Updated: 2023/02/02 18:07:10 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#	define FT_PRINTF_H

#	include <unistd.h>
#	include <stdio.h>
#	include <stdarg.h>
#	include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_flag(va_list args, const char format);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(long int n);
//int		ft_putnbr_u(unsigned int n);
int		ft_point(unsigned long ptr, int c);
char	ft_hex(long int n, char c);
int		count_len(unsigned long nbr, int bs, int sign);
int     ft_putnbr_base(unsigned long long num, char *base);
int		ft_hex_len(unsigned	int num);

#endif