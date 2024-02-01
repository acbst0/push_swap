#include "../push_swap.h"

int	ft_useless(const char *s)
{
	int	a;

	a = 0;
	while ((s[a] <= 13 && s[a] >= 9) || s[a] == 32)
	{
		a++;
	}
	return (a);
}

int	ft_atoi(const char *str)
{
	int					a;
	int					flag;
	unsigned long int	result;

	result = 0;
	flag = 1;
	a = ft_useless(str);
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			flag = -1;
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		result = result * 10 + (str[a] - 48);
		a++;
	}
	return (result * flag);
}

int	is_sorted(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->num > head->next->num)
			return (0);
		head = head->next;
	}
	return (1);
}

int	get_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}