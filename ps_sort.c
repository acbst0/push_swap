#include "push_swap.h"

void	ps_sort(t_stack *a, t_stack *b)
{

}

void	ps_basic_sorting(t_stack *a, t_stack *b)
{
	if (a->index - a->next->index == 1)
		ft_sa(a);
	if (a->index - a->next->index == -1)
		ft_pb(a, b);
}