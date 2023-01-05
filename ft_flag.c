/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:41 by ncolliot          #+#    #+#             */
/*   Updated: 2023/01/05 15:31:16 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft_42/libft.h"

int	ft_flag(va_list args, const char format)
{
	int	flag;

	flag = 0;
	if (format == 'c') // print char
		flag += ft_putchar(va_arg(args, int));
	else if (format == 's') // print strings
		flag += ft_putstr(va_arg(args, char *));
	else if (format == 'd') // print decimal
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'i') // print int 
		flag += ft_putnbr(va_arg(args, int));
	else if (format == 'u') // print unisigned char
		flag += ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x') // print hexa
		flag += ft_putnbr_hex(va_arg(args, unsigned int), 'x');
	else if (format == 'X') // print hexa
		flag += ft_putnbr_hex(va_arg(args, unsigned int), 'X');
	else if (format == '%') // print char '%'
		flag += ft_putchar('%');
	if (format == 'p') // print pointers
	{
		flag += ft_putstr("0x");
		flag += ft_putnbr_hex(va_arg(args, unsigned long), 'x');
	}
	return (flag);
}