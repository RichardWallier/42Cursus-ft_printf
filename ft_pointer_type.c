
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:04:02 by rwallier          #+#    #+#             */
/*   Updated: 2022/06/09 09:35:42 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	pointer_output(va_list ap)
{
	long long int	place_holder;
	unsigned long long int	temp;

	place_holder = (va_arg(ap, long long int));
	if (place_holder < 0)
		temp = 18446744073709551615U - (place_holder *= -1) + 1;
	else 
		temp = place_holder;
	ft_putstr_fd("0x", 1);
	ft_putnbr_hexadecimal_lowercase_fd(temp, 1);
	if (!temp)
		return (3);
	return (count_hexa(temp) + 2);
}
