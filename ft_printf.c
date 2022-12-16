/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:49 by ncolliot          #+#    #+#             */
/*   Updated: 2022/12/16 14:35:32 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft_42/libft.h"

int	ft_printf(const char *format, ...)
{
	int		flag;
	int		len;
	va_list	arg;

	flag = 0;
	len = 0;
	va_start(arg, format);
	while (format[flag])
	{
		if ((format[flag] == '%') && (format[flag + 1] != '\0'))
		{
			len += ft_flag(arg, format[flag + 1]);
			flag++;
		}
		else
			len += ft_putchar(format[flag]);
		flag++;
	}
	va_end(arg);
	return(len);
}