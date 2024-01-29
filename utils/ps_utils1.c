/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:00:55 by abostano          #+#    #+#             */
/*   Updated: 2024/01/29 19:24:04 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*nxt;

	nxt = malloc(sizeof(t_stack));
	if (!nxt)
		return (NULL);
	nxt->num = content;
	nxt->index = -1;
	nxt->next = NULL;
	nxt->back = NULL;
	return (nxt);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	tmp = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp -> next)
	{
		tmp = tmp -> next;
	}
	tmp->next = new;
	new->back = tmp;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp -> next;
		i++;
	}
	return (i);
}