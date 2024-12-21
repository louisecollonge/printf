/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:12:15 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/30 16:39:31 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_format(char string, va_list args);
int	ft_putchar_printf(char c);
int	ft_putnbr_printf(int nb);
int	ft_putstr_printf(char *str);
int	ft_nb_elt(unsigned long nb);
int	ft_uns_itoa(unsigned int nbre);
int	ft_hexa_lower(unsigned long nb);
int	ft_hexa_upper(unsigned long nb);
int	ft_nb_elt_hex(unsigned long nb);
int	ft_ptr_hex(void *ptr);
int	ft_hexa_lower_plus2(unsigned long nb);
int	ft_nb_elt_di(int nb);

#endif
