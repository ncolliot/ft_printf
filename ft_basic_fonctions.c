/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_fonctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:35:23 by ncolliot          #+#    #+#             */
/*   Updated: 2023/02/05 22:08:42 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_42/libft.h"
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_putnbr(long int nbr)
{
	int	a;

	a = 1;
	if (nbr < 0)
	{
		a = -1;
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (count_len(nbr, 10, a));
}

int	ft_putnbr_base(unsigned long long num, char *base)
{
	int		i;
	int		len;

	len = strlen(base);
	i = 0;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= (unsigned long long)len)
		i += ft_putnbr_base(num / len, base);
	ft_putchar(base[(num % len)]);
	i += 1;
	return (i);
}
