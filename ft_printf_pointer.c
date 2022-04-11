/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:52:11 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:52:13 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(unsigned long int p)
{
	char	res[17];
	int		len;
	int		hex;
	int		i;

	i = 0;
	write(1, "0x", 2);
	if (p == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	while (p != 0)
	{
		hex = p % 16;
		if (hex <= 9)
			res[i++] = '0' + hex;
		else
			res[i++] = (char)(87 + hex);
		p /= 16;
	}
	len = i + 2;
	while (i != 0)
		write(1, &res[--i], 1);
	return (len);
}
