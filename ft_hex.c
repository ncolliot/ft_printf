/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:38:34 by ncolliot          #+#    #+#             */
/*   Updated: 2022/11/02 02:02:16 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft_42/libft.h"

int	ft_hex(unsigned long ptr, int c)
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