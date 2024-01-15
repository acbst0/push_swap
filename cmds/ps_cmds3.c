/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmds3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:47:33 by abostano          #+#    #+#             */
/*   Updated: 2024/01/12 15:47:56 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack *a)
{
	t_stack	*tmp;

	if (a && a->next)
	{
		tmp = a;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = a;
		a->back = tmp;
		a = a->next;
		a->back = NULL;
		tmp->next = NULL;
	}
}

void	ft_rrb(t_stack *b)
{
	t_stack	*tmp;

	if (b && b->next)
	{
		tmp = b;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = b;
		b->back = tmp;
		b = b->next;
		b->back = NULL;
		tmp->next = NULL;
	}
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	ft_rra(a);
	ft_rrb(b);
}