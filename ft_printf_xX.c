/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:17:25 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/30 11:15:12 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nb_elt_hex(unsigned long nb)
{
	unsigned long	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_hexa_lower(unsigned long nb)
{
	int		len;
	int		i;
	char	*hex;
	char	*result;

	len = ft_nb_elt_hex(nb);
	i = len - 1;
	hex = "0123456789abcdef";
	result = malloc (len + 1);
	if (result == NULL)
		return (0);
	if (nb == 0)
		result[0] = '0';
	else
	{
		while (nb != 0)
		{
			result[i--] = hex[nb % 16];
			nb /= 16;
		}
	}
	result[len] = '\0';
	ft_putstr_printf(result);
	free(result);
	return (len);
}

int	ft_hexa_upper(unsigned long nb)
{
	int		len;
	int		i;
	char	*hex;
	char	*result;

	len = ft_nb_elt_hex(nb);
	i = len - 1;
	hex = "0123456789ABCDEF";
	result = malloc (len + 1);
	if (result == NULL)
		return (0);
	if (nb == 0)
		result[0] = '0';
	else
	{
		while (nb != 0)
		{
			result[i--] = hex[nb % 16];
			nb /= 16;
		}
	}
	result[len] = '\0';
	ft_putstr_printf(result);
	free(result);
	return (len);
}
