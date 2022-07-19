/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:50:50 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:50:54 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion_type(const char *line, void *value)
{
	if (*line == 'c')
		return (ft_printf_char((char) value));
	else if (*line == 's')
		return (ft_printf_string((char *) value));
	else if (*line == 'p')
		return (ft_printf_pointer((unsigned long int) value));
	else if (*line == 'd')
		return (ft_printf_decimal_numb((int) value));
	else if (*line == 'i')
		return (ft_printf_decimal_numb((int) value));
	else if (*line == 'u')
		return (ft_printf_unsign_int((unsigned int) value));
	else if (*line == 'x')
		return (ft_printf_hexadecimal_low((unsigned int) value));
	else if (*line == 'X')
		return (ft_printf_hexadecimal_up((unsigned int) value));
	return (0);
}

int	ft_printf(const char *line, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, line);
	while (*line)
	{
		if (*line != '%')
			i += (write(1, line++, 1));
		else if (*line != '\0' && *(line + 1) == '%')
		{
			i += (write(1, "%%", 1));
			line += 2;
		}
		else
		{
			line++;
			i += ft_conversion_type(line, va_arg(args, void *));
			line++;
		}
	}
	va_end(args);
	return (i);
}
