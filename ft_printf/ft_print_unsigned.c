/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:04:23 by abostano          #+#    #+#             */
/*   Updated: 2023/11/07 12:01:22 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

unsigned int	ft_unsigned(unsigned int i)
{
	unsigned int	count;

	if (i >= 10)
	{
		count = ft_unsigned(i / 10);
		ft_putchar('0' + (i % 10));
		return (count + 1);
	}
	else
	{
		ft_putchar('0' + i);
		return (1);
	}
}
