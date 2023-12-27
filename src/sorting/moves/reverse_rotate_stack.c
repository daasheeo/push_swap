/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:33:41 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/25 16:27:18 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !(*stack)->next)
		return ;
	node = stk_pop_last(stack);
	node->next = *stack;
	*stack = node;
}

void	ft_double_reverse_rotate(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}

void	ft_do_reverse_rotate(t_stack **stack, char *str)
{
	ft_reverse_rotate(stack);
	ft_putstr_fd(str, 1);
}

void	ft_do_double_reverse_rotate(t_stack **stack_a, t_stack **stack_b,
		char *str)
{
	ft_double_reverse_rotate(stack_a, stack_b);
	ft_putstr_fd(str, 1);
}
