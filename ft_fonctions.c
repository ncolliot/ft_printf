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
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_putchar("-2147483648");
		len = 11;
	}
	else if (n < 0)
	{
		ft_putchar("-");
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putstr(n % 10 + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putchar(n % 10 + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}