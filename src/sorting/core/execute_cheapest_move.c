/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cheapest_move.c.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:13:03 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/22 21:34:56 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_execute_move(t_stack **stack_a, t_stack **stack_b, int cost_a,
		int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
	{
		while (cost_a < 0 && cost_b < 0)
		{
			cost_a++;
			cost_b++;
			ft_do_double_reverse_rotate(stack_a, stack_b, "rrr\n");
		}
	}
	else if (cost_a > 0 && cost_b > 0)
	{
		while (cost_a > 0 && cost_b > 0)
		{
			cost_a--;
			cost_b--;
			ft_do_double_rotate(stack_a, stack_b, "rr\n");
		}
	}
	ft_do_rotate_to(stack_a, &cost_a, 1);
	ft_do_rotate_to(stack_b, &cost_b, 2);
	ft_do_push(stack_b, stack_a, "pa\n");
}
