#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(char *s, ...);

void	choose_type(char *s, char c, va_list ap);

void	string_output(char *s, va_list ap);

int	main(void)
{
	ft_printf("valeu %s\n", "legal");
}

int	ft_printf(char *s, ...)
{
	va_list ap;
	int sum;
	int index;

	va_start(ap, s);
	index = 0;
	while (s[index])
	{
		if (s[index] == '%')
			choose_type(s, s[index + 1], ap);
		index++;
	}
	return (1);
}

void	choose_type(char *s, char c, va_list ap)
{
	if (c == 's')
		string_output(s, ap);
}

void	string_output(char *s, va_list ap)
{
	int index = 0;
	while (index < ft_strlen(s))
	{
		if (s[index] == '%')
		{
			ft_putstr_fd(va_arg(ap, char *), 1);
			if (index + 2 < ft_strlen(s))
				index += 2;
		}
		ft_putchar_fd(s[index], 1);
		index++;
	}
}
