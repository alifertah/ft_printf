/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:50:53 by alfertah          #+#    #+#             */
/*   Updated: 2021/11/27 01:51:13 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *s, int *cp)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", cp);
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], cp);
		i++;
	}
}
