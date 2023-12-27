/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 10:22:42 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	stk_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

t_stack	*stk_top(t_stack *stack)
{
	if (stk_is_empty(stack))
		return (NULL);
	return (stack);
}

t_stack	*stk_last(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int	ft_find_hightest(t_stack *stack)
{
	int	highest;

	highest = stack->index;
	while (stack)
	{
		if (highest < stack->index)
			highest = stack->index;
		stack = stack->next;
	}
	return (highest);
}

int	ft_find_lowest_position(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_index;
	int		lowest_position;

	tmp = *stack;
	lowest_index = INT_MAX;
	ft_set_positions(stack);
	lowest_position = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_index)
		{
			lowest_index = tmp->index;
			lowest_position = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_position);
}
