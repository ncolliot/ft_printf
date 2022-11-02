/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:41 by ncolliot          #+#    #+#             */
/*   Updated: 2022/11/02 03:10:09 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft_42/libft.h"

int	ft_flag(va_list args, const char format)
{
	int	flag;

	flag = 0;
	if (format == 'c')
		flag += ft_putchar(va_arg(args, int));
	else if (format == 's')
		flag += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		flag += ft_hex(va_arg(args, unsigned long), 0);
	else if (format == 'd')
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		flag += ft_putnbr_u(va_arg(args, unsigned int));
/*	else if (format == 'x' || format == 'X')
		flag += ft_hex(va_arg(args, unsigned long));*/
	else if (format == '%')
		flag += write(1, "%", 1);
	return (flag);
}