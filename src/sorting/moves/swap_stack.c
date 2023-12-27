/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:33:46 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 17:36:14 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_double_swap(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_do_swap(t_stack **stack, char *str)
{
	ft_swap(stack);
	ft_putstr_fd(str, 1);
}

void	ft_do_double_swap(t_stack **stack_a, t_stack **stack_b, char *str)
{
	ft_double_swap(stack_a, stack_b);
	ft_putstr_fd(str, 1);
}
