/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_lowercase_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:04:02 by rwallier          #+#    #+#             */
/*   Updated: 2022/06/09 15:52:04 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	hexadecimal_lowercase_output(va_list ap)
{
	long long int	place_holder;
	unsigned long long int	temp;

	place_holder = (va_arg(ap, unsigned int));
	ft_putnbr_hexadecimal_lowercase_fd(place_holder, 1);
	return (count_hexa(place_holder));
}
