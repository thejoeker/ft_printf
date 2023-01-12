/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 05:45:22 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 05:49:13 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexaup_format(unsigned int nb, int *length, char *s)
{
	if (nb >= 16)
	{
		ft_hexaup_format(nb / 16, length, s);
		nb %= 16;
	}		
	if (nb > 9 && nb < 16)
	{
		if (*s == 'x' || *s == 'p')
			ft_putchar_format(nb % 10 + 97, length);
		else
			ft_putchar_format(nb % 10 + 65, length);
	}
	else
		ft_putchar_format(nb + '0', length);
}
