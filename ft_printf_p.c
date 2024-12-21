/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:22:29 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/30 16:39:21 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hex(void *ptr)
{
	if (ptr == NULL)
		return (ft_putstr_printf("(nil)"));
	else
		return (ft_hexa_lower_plus2((unsigned long)ptr));
}

int	ft_hexa_lower_plus2(unsigned long nb)
{
	int		len;
	int		i;
	char	*hex;
	char	*result;

	len = ft_nb_elt_hex(nb);
	i = len - 1 + 2;
	hex = "0123456789abcdef";
	result = malloc (len + 1 + 2);
	if (result == NULL)
		return (0);
	else
	{
		result[0] = '0';
		result[1] = 'x';
		while (nb != 0)
		{
			result[i--] = hex[nb % 16];
			nb /= 16;
		}
	}
	result[len + 2] = '\0';
	ft_putstr_printf(result);
	free(result);
	return (len + 2);
}
