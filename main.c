#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>


int	main(void)
{ 

	ft_printf("string: %s\nchar: %c\ninteger: %i\nunsigned integer: %u\nhexadecimal: %x\n", "printf", 'C', 42, 4294967295, 26);
	ft_printf("hexadecimal: %x\n", 255);
	return (0);
}
