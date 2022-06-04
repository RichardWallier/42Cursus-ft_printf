#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	size_t	index;

	va_start(ap, s);
	index = 0;
	while (s[index])
	{
		if (s[index] == '%')
		{
			choose_type(s[index + 1], ap);
			index++;
		}
		else
			ft_putchar_fd(s[index], 1);
		index++;
	}
	va_end(ap);
	return (1);
}

void	choose_type(char c, va_list ap)
{
	if (c == 'c')
		char_output(ap);
	if (c == 's')
		string_output(ap);
	if (c == 'i')
		integer_output(ap);
	if (c == 'u')
		unsigned_decimal_output(ap);
	if (c == 'x')
		hexadecimal_lowercase_output(ap);
	if (c == 'X')
		hexadecimal_uppercase_output(ap);
	if (c == '%')
		percent_output();
}

void	percent_output()
{
	ft_putchar_fd('%', 1);
}

void	char_output(va_list ap)
{
	char	place_holder;

	place_holder = (va_arg(ap, int));
	ft_putchar_fd(place_holder, 1);
}

void	string_output(va_list ap)
{
	char	*place_holder;

	place_holder = (va_arg(ap, char *));
	ft_putstr_fd(place_holder, 1);
	return ;
}

void	integer_output(va_list ap)
{
	int	place_holder;

	place_holder = (va_arg(ap, int));
	ft_putnbr_fd(place_holder, 1);
}

void	unsigned_decimal_output(va_list ap)
{
	unsigned int	place_holder;

	place_holder = (va_arg(ap, unsigned int));
	ft_putnbr_fd(place_holder, 1);
}
void	hexadecimal_lowercase_output(va_list ap)
{
	long long int	place_holder;

	place_holder = (va_arg(ap, long long));
	ft_putnbr_hexadecimal_lowercase_fd(place_holder, 1);
}

void	hexadecimal_uppercase_output(va_list ap)
{
	long long int	place_holder;

	place_holder = (va_arg(ap, long long));
	ft_putnbr_hexadecimal_uppercase_fd(place_holder, 1);
}
