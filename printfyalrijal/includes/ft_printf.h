/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:20:20 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/27 01:48:39 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *a, ...);
void	ft_putchar(char c, int *cp);
void	ft_check(va_list args, int i, const char *str, int *len);
void	ft_putstr(char *s, int *cp);
void	ft_putnbr(int nb, int *cp);
void	ft_putnbr_unsigned(unsigned int n, int *cp);
void	ft_tohex(unsigned int d, const char *base, int *cp);
void	ft_ptr(unsigned long n, char *base, int *cp);
void	ft_unsigned(unsigned int n, int *cp);
#endif
