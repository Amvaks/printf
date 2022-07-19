/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal_low.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:51:46 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:51:48 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexadecimal_low(unsigned int n)
{
	int		tmp;
	char	res[17];
	int		i;
	int		len;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp <= 9)
			res[i] = '0' + tmp;
		else
			res[i] = (char)(87 + tmp);
		n /= 16;
		i++;
	}
	len = i;
	while (i != 0)
	{
		i--;
		write(1, &res[i], 1);
	}
	return (len);
}
