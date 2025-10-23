/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:41:53 by lcollong          #+#    #+#             */
/*   Updated: 2025/10/23 09:25:36 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
//! CHARACTER :
    printf("%%c :\n");
    ft_printf(" taille = %d\n", ft_printf("%c", 'A'));
    printf(" taille = %d\n", printf("%c",'A'));
//! STRING :
	char *s = NULL;
    printf("%%s :\n");
    ft_printf(" taille = %d\n", ft_printf("%s", s));
    printf(" taille = %d\n", printf("%s", s));
//! PERCENT SIGN :
    printf("%%%% :\n");
    ft_printf(" taille = %d\n", ft_printf("%%"));
    printf(" taille = %d\n", printf("%%"));
//! DECIMAL NUMBER :
    printf("%%d :\n");
    ft_printf(" taille = %d\n", ft_printf("%d", -1));
    printf(" taille = %d\n", printf("%d", -1));
//! INTEGER BASE 10 :
    printf("%%i :\n");
    ft_printf(" taille = %d\n", ft_printf("%i", -1));
    printf(" taille = %d\n", printf("%i", -1));
//! UNSIGNED DECIMAL NUMBER :
    printf("%%u :\n");
    ft_printf(" taille = %d\n", ft_printf("%u", -42));
    printf(" taille = %d\n", printf("%u", -42));
//! HEXIDECIMAL LOWERCASE :
    printf("%%x :\n");
    ft_printf(" taille = %d\n", ft_printf("%x", 45642));
    printf(" taille = %d\n", printf("%x", 45642));
//! HEXADECIMAL UPPERCASE :
    printf("%%X :\n");
    ft_printf(" taille = %d\n", ft_printf("%X", 45642));
    printf(" taille = %d\n", printf("%X", 45642));
//! POINTER :
    printf("%%p :\n");
	int	*ptr = NULL;
    ft_printf(" taille = %d\n",ft_printf("%p", ptr));
    printf(" taille = %d\n",printf("%p", ptr));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	va_start(args, str);
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_format(str[++i], args);
		else
			len += ft_putchar_printf(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	ft_format(char form, va_list args)
{
	int	len;

	len = 0;
	if (form == 'c')
		len += ft_putchar_printf((char)va_arg(args, int));
	else if (form == 's')
		len += ft_putstr_printf(va_arg(args, char *));
	else if (form == 'd' || form == 'i')
		len += ft_putnbr_printf(va_arg(args, int));
	else if (form == 'u')
		len += ft_uns_itoa(va_arg(args, unsigned int));
	else if (form == '%')
		len += ft_putchar_printf('%');
	else if (form == 'x')
		len += ft_hexa_lower(va_arg(args, unsigned int));
	else if (form == 'X')
		len += ft_hexa_upper(va_arg(args, unsigned int));
	else if (form == 'p')
		len += ft_ptr_hex(va_arg(args, void *));
	return (len);
}
