/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:32:25 by ncolliot          #+#    #+#             */
/*   Updated: 2022/11/02 03:09:15 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#	define FT_PRINTF_H

#	include <unistd.h>
#	include <stdio.h>
#	include <stdarg.h>
#	include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_flag(va_list args, const char format);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_hex(unsigned long ptr, int c);

#endif