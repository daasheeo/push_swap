/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:49:58 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/22 18:16:03 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_push_all_minus_three(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	stack_size;
	int	nodes_moved;

	stack_size = stk_size(*stack_a);
	i = 0;
	nodes_moved = 0;
	while (stack_size > 6 && i < stack_size && nodes_moved < stack_size / 2)
	{
		if ((*stack_a)->index <= stack_size / 2)
		{
			ft_do_push(stack_a, stack_b, "pb\n");
			nodes_moved++;
		}
		else
			ft_do_rotate(stack_a, "ra\n");
		i++;
	}
	while (stack_size - nodes_moved > 3)
	{
		ft_do_push(stack_a, stack_b, "pb\n");
		nodes_moved++;
	}
}

void	ft_shift_stack(t_stack **stack_a)
{
	int	stack_size;
	int	lowest_pos;

	stack_size = stk_size(*stack_a);
	lowest_pos = ft_find_lowest_position(stack_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			ft_do_reverse_rotate(stack_a, "rra\n");
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ft_do_rotate(stack_a, "ra\n");
			lowest_pos--;
		}
	}
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	ft_push_all_minus_three(stack_a, stack_b);
	ft_sort_three(stack_a);
	while (*stack_b)
	{
		ft_find_target_position(stack_a, stack_b);
		ft_calculate_cost(stack_a, stack_b);
		ft_do_cheapest_move(stack_a, stack_b);
	}
	if (!ft_is_sorted(*stack_a))
		ft_shift_stack(stack_a);
}
