#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*back;
}	t_stack;

t_stack	*ft_lstnew(int *content)
{
	t_stack	*nxt;

	nxt = malloc(sizeof(t_stack));
	if (!nxt)
		return (NULL);
	nxt->num = content;
	nxt->next = NULL;
	nxt->back = NULL;
	return (nxt);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (lst == NULL)
	{
		lst = &new;
		return ;
	}
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

int main()
{
	t_stack	*a;

	a = NULL;
	ft_lstadd_front(&a, ft_lstnew(1));
	ft_lstadd_front(&a, ft_lstnew(2));

	printf("%d\n", a->num);
	a = a->next;
	printf("%d\n", a->num);
}