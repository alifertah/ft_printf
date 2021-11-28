/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:41:05 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/27 01:49:22 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check(va_list args, int i, const char *str, int *len)
{
	i++;
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), len);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, int), len);
	if (str[i] == 'x')
		ft_tohex(va_arg(args, unsigned long), "0123456789abcdef", len);
	if (str[i] == 'X')
		ft_tohex(va_arg(args, unsigned long), "0123456789ABCDEF", len);
	if (str[i] == '%')
		ft_putchar('%', len);
	if (str[i] == 'p')
	{
		ft_putstr("0x", len);
		ft_ptr(va_arg(args, unsigned long), "0123456789abcdef", len);
	}
	if (str[i] == 's')
		ft_putstr(va_arg(args, char *), len);
	if (str[i] == 'u')
		ft_unsigned(va_arg(args, unsigned int), len);
}

int	ft_printf(const char *a, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, a);
	while (a[i])
	{
		if (a[i] != '%')
			ft_putchar(a[i], &len);
		else
		{
			ft_check(args, i, a, &len);
			i++;
		}
		i++;
	}
	return (len);
}
/*int main()
{
    int i = ft_printf("%\n", 'a');
    printf("%c\n", 'a');
    ft_printf("%s\n", "ali");
    printf("%s\n", "ali");
    ft_printf("%i\n", i);
    printf("%i\n", 15);
    ft_printf("%d\n", 14);
    printf("%d\n", 14);
    ft_printf("%x\n", 2021);
    printf("%x\n", 2021);
    ft_printf("%X\n", 2021);
    printf("%X\n", 2021);
    ft_printf("%u\n", 1);
    printf("%u\n", 1);
}*/