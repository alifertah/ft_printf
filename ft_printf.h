/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:06:15 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/24 23:06:17 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
#include <stdarg.h>
void	ft_putnbr(int nb);
void	ft_putchar(int c);
void	ft_putstr(char *str);
void    ft_tohex(int d);
int	ft_tolower(int c);
void ft_to_lowerhex(int d);
void	ft_putnbr_unsigned(unsigned int nb);
#endif
