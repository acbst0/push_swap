/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:00:58 by abostano          #+#    #+#             */
/*   Updated: 2024/01/12 17:05:17 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*back;
}	t_stack;

//Push swap functions
void	ft_sa(t_stack *a);
void	ft_sb(t_stack *b);
void	ft_ss(t_stack *a, t_stack *b);
void	ft_pa(t_stack *a, t_stack *b);
void	ft_pb(t_stack *a, t_stack *b);
void	ft_ra(t_stack *a);
void	ft_rb(t_stack *b);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rra(t_stack *a);
void	ft_rrb(t_stack *b);
void	ft_rrr(t_stack *a, t_stack *b);
//List functions
t_stack	*ft_lstnew(void *content);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_addfirst(char **argv, t_stack **a);
//Checking functions
int		ft_check_order(t_stack *a);

#endif