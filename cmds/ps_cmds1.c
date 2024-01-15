/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmds1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:55:08 by abostano          #+#    #+#             */
/*   Updated: 2024/01/12 15:44:02 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack *a)
{
	int		tmp;

	if (a && a->next)
	{
		tmp = a->num;
		a->num = a->next->num;
		a->next->num = tmp;
	}
}

void	ft_sb(t_stack *b)
{
	int		tmp;

	if (b && b->next)
	{
		tmp = b->num;
		b->num = b->next->num;
		b->next->num = tmp;
	}
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_sa(a);
	ft_sb(b);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	t_stack	*tmp;

	if (b)
	{
		tmp = b->next;
		b->next = a;
		a->back = b;
		a = b;
		b = tmp;
	}
}

void	ft_pb(t_stack *a, t_stack *b)
{
	t_stack	*tmp;

	if (a)
	{
		tmp = a->next;
		a->next = b;
		b->back = a;
		b = a;
		a = tmp;
	}
}
