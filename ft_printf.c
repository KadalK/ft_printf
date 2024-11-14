/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:05:58 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/13 13:05:58 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int count;
	va_list	arg;

	va_start(arg, format);
	count = 0;
	while(*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
				count += ft_putchar(va_arg(arg, int));
			if (*format == '%')
				return (ft_putchar('%'));
			if (*format == 's')
				ft_putstr(va_arg(arg, char*));
			if (*format == 'd' || *format == 'i')
				ft_putnbr_base(va_arg(arg, int), "0123456789");
			if (*format == 'x')
				ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
			if(*format == 'X')
				ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
			if (*format == 'u')
				ft_putnbr_base(va_arg(arg, unsigned int), "0123456789");
			if (*format == 'p')
			{
				ft_putstr("0x");
				ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
			}
		}
		format++;
	}
	va_end(arg);
	return (count);
}

#include <stdio.h>
int	main()
{
	ft_printf("%d\nft_print", 1234);
	printf("%d\nprint", 1234);
	return (0);
}