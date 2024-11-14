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
	long count;
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
			else if (*format == 's')
				count += ft_putstr(va_arg(arg, char *));
			else if (*format == 'd' || *format == 'i')
				count += ft_putnbr_long_base(va_arg(arg, long ), "0123456789");
			else if (*format == 'x')
				count += ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
			else if(*format == 'X')
				count += ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
			else if (*format == 'u')
				count += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789");
			else if (*format == 'p')
			{
				count += ft_putstr("0x");
				count += ft_putnbr_long_base(va_arg(arg, long), "0123456789abcdef");
			}
			else
				count += (ft_putchar('%'));

		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(arg);
	return ((int)count);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_printf("-----[MA FONCTION]-----\n");
	ft_printf("String test: %s%s\n", "AIH", "GERG");
	ft_printf("Character test: %c\n", 'A');
	ft_printf("Decimal test: %d\n", 42);
	ft_printf("Hexadecimal (lowercase) test: %x\n", 255);
	ft_printf("Hexadecimal (uppercase) test: %X\n", 255);
	ft_printf("Unsigned test: %u\n", 42);
	ft_printf("Pointer test: %p\n", &main);
	ft_printf("Percentage test: %%\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("caca");
	ft_printf("\n");
	ft_printf("%c", "-45");
	ft_printf("\n");
	ft_printf("%d", INT_MAX);
	ft_printf("\n");
	ft_printf("%d", INT_MIN);
	ft_printf("\n");
	ft_printf("%");
	ft_printf("\n");



	printf("\n-----[LA VRAI FONCTION]-----\n");
	printf("String test: %s%s\n", "AIH", "GERG");
	printf("Character test: %c\n", 'A');
	printf("Decimal test: %d\n", 42);
	printf("Hexadecimal (lowercase) test: %x\n", 255);
	printf("Hexadecimal (uppercase) test: %X\n", 255);
	printf("Unsigned test: %u\n", 42);
	printf("Pointer test: %p\n", &main);
	printf("Percentage test: %%\n");
	return (0);
}*/