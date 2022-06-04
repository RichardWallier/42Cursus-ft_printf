#include "libft/libft.h"
#include <stdio.h>
void	ft_putnbr_hexadecimal_fd(long long n, int fd)
{
	char	character;
	char	hexadecimal_digits[16];

	ft_strlcpy(hexadecimal_digits, "0123456789abcdef", 16);
	character = '\0';
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 16)
	{
		character = hexadecimal_digits[n];
		ft_putchar_fd(character, fd);
		return ;
	}
	else
		ft_putnbr_hexadecimal_fd(n / 16, fd);
	ft_putnbr_hexadecimal_fd(n % 16, fd);
}
