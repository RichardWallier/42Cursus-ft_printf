#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

int	ft_printf(char *s, ...);

void	choose_type(char c, va_list ap);

void	string_output(va_list ap);

void	char_output(va_list ap);

void	integer_output(va_list ap);

void	unsigned_decimal_output(va_list ap);

void	hexadecimal_lowercase_output(va_list ap);

void	ft_putnbr_hexadecimal_fd(long long n, int fd);


#endif
