/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:41 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/07 13:06:57 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_flag(va_list args, const char format)
{
	int	flag;

	flag = 0;
	if (format == 'c')
		flag += ft_putchar(va_arg(args, int));
	else if (format == 's')
		flag += ft_putchar(va_arg(args, char *));
	else if (format == 'p')
		flag += ft_putstr("0x")(va_arg(args, unsigned long), 0);
	else if (format == 'd')
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		flag += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
	{
		if (format == 'x')
			flag += va_arg(args, unsigned int), "0123456789abcdef";
		else
			flag += va_arg(args, unsigned int), "0123456789ABCDEF";
	}	
	else if (format == '%')
		flag += write(1, "%", 1);
	return (flag);
}