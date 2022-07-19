/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsign_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:52:31 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:52:33 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_number_u(unsigned int num)
{
	unsigned int	res;

	if (num == 0)
		return (1);
	res = 0;
	while (num != 0)
	{
		num /= 10;
		res++;
	}
	return (res);
}

void	ft_putnbr_u(unsigned int num)
{
	unsigned int	res;

	res = num;
	if (res >= 10)
		ft_putnbr_u(res / 10);
	ft_printf_char((res % 10) + '0');
}

int	ft_printf_unsign_int(unsigned int num)
{
	int	res;

	res = 0;
	if (num < 0)
		res = 1;
	ft_putnbr_u(num);
	res += ft_len_number_u(num);
	return (res);
}
