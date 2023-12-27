/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:52:06 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/11 16:00:08 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_indexer(t_stack *stack, int stack_size)
{
	t_stack	*tmp;
	t_stack	*hightest_value;
	int		value;

	while (--stack_size > 0)
	{
		tmp = stack;
		value = INT_MIN;
		hightest_value = NULL;
		while (tmp)
		{
			if (tmp->value == INT_MIN && tmp->index == 0)
				tmp->index = 1;
			if (tmp->value > value && tmp->index == 0)
			{
				value = tmp->value;
				hightest_value = tmp;
				tmp = stack;
			}
			else
				tmp = tmp->next;
		}
		if (hightest_value != NULL)
			hightest_value->index = stack_size;
	}
}

void	ft_set_positions(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}
