#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

void	choose_type(char c, va_list ap);

void	string_output(va_list ap);

void	char_output(va_list ap);

void	integer_output(va_list ap);

void	unsigned_decimal_output(va_list ap);

void	hexadecimal_lowercase_output(va_list ap);

void	hexadecimal_uppercase_output(va_list ap);

void	percent_output();

void	ft_putnbr_hexadecimal_lowercase_fd(long long n, int fd);

void	ft_putnbr_hexadecimal_uppercase_fd(long long n, int fd);

int		ft_printf(const char *s, ...);

#endif
