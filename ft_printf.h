#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_putnbr_base(int nb, char *base);
long	ft_putnbr_long_base(long nb, char *base);
int ft_putnbr(int nb);

#endif