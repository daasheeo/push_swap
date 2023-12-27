/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:51:02 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/21 18:36:36 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*stk_pop(t_stack **stack)
{
	t_stack	*aux;

	if (*stack == NULL)
		return (NULL);
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	return (aux);
}

t_stack	*stk_pop_last(t_stack **stack)
{
	t_stack	*current;
	t_stack	*previous;

	if (stack == NULL || *stack == NULL)
		return (NULL);
	current = *stack;
	previous = NULL;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	if (previous != NULL)
		previous->next = NULL;
	else
		*stack = NULL;
	return (current);
}

void	stk_clear(t_stack **stack)
{
	t_stack	*aux;

	if (!stack || !(*stack))
		return ;
	while (*stack != NULL)
	{
		aux = *stack;
		*stack = (*stack)->next;
		free(aux);
	}
}
