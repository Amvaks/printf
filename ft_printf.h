/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:51:08 by sbart             #+#    #+#             */
/*   Updated: 2022/01/15 16:51:10 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *c);
int		ft_printf(const char *line, ...);
int		ft_conversion_type(const char *line, void *value);
int		ft_printf_char(char c);
int		ft_printf_string(char *s);
int		ft_printf_pointer(unsigned long int p);
int		ft_printf_decimal_numb(int num);
int		ft_len_number_u(unsigned int num);
void	ft_putnbr_u(unsigned int num);
int		ft_printf_unsign_int(unsigned int num);
int		ft_printf_hexadecimal_low(unsigned int n);
int		ft_printf_hexadecimal_up(unsigned int n);
int		ft_check_type(const char *line, void *value);
int		ft_len_number(int num);
void	ft_putnbr_di(int nun);

#endif
