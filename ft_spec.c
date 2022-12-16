/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:38:34 by ncolliot          #+#    #+#             */
/*   Updated: 2022/12/13 17:09:31 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft_42/libft.h"

int	ft_point(unsigned long ptr, int c)
{
	int     len;
    char    *hex;

    hex = "0123456789abcdef";
    len = 0;
    if (!c)
    {
        len += write(1, "0x", 2);
        c++;
    }
    if (ptr > 15)
        len += ft_hex(ptr / 16, c);
    len += ft_putchar(hex[ptr % 16]);
    return(len);
}

char	ft_hex(long int n, char c)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (n > 15)
		len += ft_hex(n / 16, c);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}