/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal_numb.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:51:30 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:51:32 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_di(int num)
{
	int	res;

	res = num;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (res < 0)
	{
		ft_printf_char('-');
		res *= -1;
	}
	if (res >= 10)
		ft_putnbr_di(res / 10);
	ft_printf_char((res % 10) + '0');
}

int	ft_printf_decimal_numb(int num)
{
	unsigned int	res;

	res = 0;
	if (num < 0)
		res = 1;
	ft_putnbr_di(num);
	res += ft_len_number(num);
	return (res);
}
