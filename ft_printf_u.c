/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:17:16 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/30 15:42:03 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nb_elt(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len ++;
	}
	return (len);
}

int	ft_uns_itoa(unsigned int nbre)
{
	unsigned int	n;
	int				dig;
	int				len;
	char			*nb;

	n = (unsigned int)nbre;
	len = ft_nb_elt(nbre);
	dig = len;
	nb = malloc(dig + 1);
	if (nb == NULL)
		return (0);
	nb[dig] = '\0';
	while (dig)
	{
		dig--;
		nb[dig] = n % 10 + '0';
		n = n / 10;
	}
	ft_putstr_printf(nb);
	free(nb);
	return (len);
}
