/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:50:41 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 09:51:21 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_is_sorted(t_stack *stack)
{
	int	tmp;

	if (!stack)
		return (0);
	tmp = stack->value;
	while (stack)
	{
		if (tmp > stack->value)
			return (0);
		tmp = stack->value;
		stack = stack->next;
	}
	return (1);
}

int	stk_is_empty(t_stack *stack)
{
	return (stack == NULL);
}
