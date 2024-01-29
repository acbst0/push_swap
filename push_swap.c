/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:00:52 by abostano          #+#    #+#             */
/*   Updated: 2024/01/20 13:56:03 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	if (argc < 2)
		return (-1);
	ft_check_args(argc, argv);
	a = (t_stack **)malloc(sizeof(t_stack *));
	b = (t_stack **)malloc(sizeof(t_stack *));
	*a = NULL;
	*b = NULL;
	create_stack(a, argc, argv);
}