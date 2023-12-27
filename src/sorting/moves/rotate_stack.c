/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:33:44 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/25 16:26:45 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_rotate(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !(*stack)->next)
		return ;
	node = stk_pop(stack);
	stk_last(*stack)->next = node;
}

void	ft_double_rotate(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_do_rotate(t_stack **stack, char *str)
{
	ft_rotate(stack);
	ft_putstr_fd(str, 1);
}

void	ft_do_double_rotate(t_stack **stack_a, t_stack **stack_b, char *str)
{
	ft_double_rotate(stack_a, stack_b);
	ft_putstr_fd(str, 1);
}

void	ft_do_rotate_to(t_stack **stack, int *cost, int option)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			if (option == 1)
				ft_do_rotate(stack, "ra\n");
			else if (option == 2)
				ft_do_rotate(stack, "rb\n");
			(*cost)--;
		}
		else if (*cost < 0)
		{
			if (option == 1)
				ft_do_reverse_rotate(stack, "rra\n");
			else if (option == 2)
				ft_do_reverse_rotate(stack, "rrb\n");
			(*cost)++;
		}
	}
}
