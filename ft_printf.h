#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr_base(int nb, char *base);
void ft_putnbr(int nb);

#endif