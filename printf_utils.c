/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:17:01 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/13 14:17:01 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return((int)write(1, &c, 1));
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}

	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb % 10 + '0');
	return (count);
}

int	ft_putnbr_base(int nb, char *base)
{

	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= (int)ft_strlen(base))
	{
		count += ft_putnbr_base(nb / (int)ft_strlen(base), base);
		count += ft_putnbr_base(nb % (int)ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
	return (count);
}

long	ft_putnbr_long_base(long nb, char *base)
{

	long	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= (int)ft_strlen(base))
	{
		count += ft_putnbr_long_base(nb / (long)ft_strlen(base), base);
		count += ft_putnbr_long_base(nb % (long)ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
	return (count);
}
