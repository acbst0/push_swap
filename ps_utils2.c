/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:24:56 by abostano          #+#    #+#             */
/*   Updated: 2024/01/12 18:09:36 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addfirst(char **argv, t_stack **a)
{
	int		i;

	i = 1;
	while (argv[i++])
		ft_lstadd_front(a, ft_lstnew(ft_atoi(argv[i])));
}

int	ft_check_order(t_stack *a)
{
	t_stack	*tmp;
	int		i;

	i = 1;
	tmp = a;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_check_a(t_stack *a, t_stack *b, int argc)
{
	iwhile (ft_check_order(a) != argc)
	{
		if (a->num > a->next->num)
			ft_a(a);
		if ()
	}	
}

void	ft_check_b(t_stack *a, t_stack *b)
{
	
}