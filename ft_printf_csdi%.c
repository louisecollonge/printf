/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_csdi%.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:27:09 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/30 11:31:59 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_printf(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
		len = ft_putstr_printf("(null)");
	else
	{
		while (str[i])
		{
			ft_putchar_printf(str[i]);
			len++;
			i++;
		}
	}
	return (len);
}

int	ft_nb_elt_di(int nb)
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

int	ft_putnbr_printf(int nb)
{
	long	nbre;
	int		len;

	nbre = nb;
	len = ft_nb_elt_di(nb);
	if (nbre < 0)
	{
		write (1, "-", 1);
		nbre = -nbre;
		len++;
	}
	if (nbre > 9)
	{
		ft_putnbr_printf(nbre / 10);
		ft_putnbr_printf(nbre % 10);
	}
	else
		ft_putchar_printf(nbre + '0');
	return (len);
}
