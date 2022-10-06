/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:41 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/06 16:18:00 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_flag(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		length += ft_putchar(va_arg(args, char *));
	else if (format == 'p')
		length += ft_putchar(va_arg(args, unsigned long), 0);
	else if (format == 'd')
		length += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += write(1, "%", 1);
	return (length);
}