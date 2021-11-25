/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:05:46 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/24 23:05:59 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
void ft_printf(char *str, ...)
{
va_list args;
va_start(args, str);
va_end(args);
int j;
j = 0;
    while(str[j])
    {
        if (str[j] == '%')
        {
            if(str[j + 1] == 'd' || str[j + 1] == 'i')
              ft_putnbr(va_arg(args, int));
            if(str[j + 1] == 'c')
                ft_putchar(va_arg(args, int));
             if(str[j + 1] == 's')
                ft_putstr(va_arg(args, char *));
            if(str[j + 1] == 'u')
                ft_putnbr_unsigned(va_arg(args, unsigned int));
            if(str[j + 1] == '%')
                ft_putchar('%');
             if(str[j + 1] == 'X')
                ft_tohex(va_arg(args, int));
             if(str[j + 1] == 'x')
                ft_to_lowerhex(va_arg(args, int));
            if(str[j + 1] == 'p')
            {
                ft_putstr("0x10");
                ft_tohex(va_arg(args, int));
            }
            j++;
        }
        else
            ft_putchar(str[j]);
        j++;
    }
}
int main()
{
    char *p = "ali";
    ft_printf("%x\n",2021);
    ft_printf("%X\n",2021);
    printf("%X",2021);
    return 0;
}
