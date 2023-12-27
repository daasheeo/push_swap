/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:18:06 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 17:41:08 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>

void	ft_instructions(char *line, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(line, "sa\n") == 0)
		ft_swap(stack_a);
	else if (ft_strcmp(line, "sb\n") == 0)
		ft_swap(stack_b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ft_double_swap(stack_a, stack_b);
	else if (ft_strcmp(line, "pa\n") == 0)
		ft_push(stack_b, stack_a);
	else if (ft_strcmp(line, "pb\n") == 0)
		ft_push(stack_a, stack_b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ft_rotate(stack_a);
	else if (ft_strcmp(line, "rb\n") == 0)
		ft_rotate(stack_b);
	else if (ft_strcmp(line, "rr\n") == 0)
		ft_double_rotate(stack_a, stack_b);
	else if (ft_strcmp(line, "rra\n") == 0)
		ft_reverse_rotate(stack_a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		ft_reverse_rotate(stack_b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		ft_double_reverse_rotate(stack_a, stack_b);
	else
		exit_error(stack_a, stack_b);
}
