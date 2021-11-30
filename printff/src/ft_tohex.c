/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:53:51 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/27 01:51:37 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_tohex(unsigned int d, const char *base, int *cp)
{	
	if (d >= 16)
		ft_tohex(d / 16, base, cp);
	ft_putchar(base[d % 16], cp);
}
