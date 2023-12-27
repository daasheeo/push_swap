/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:00:35 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 16:57:26 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		stk_clear(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		stk_clear(stack_b);
	write(STDERR_FILENO, "Error\n", 7);
	exit(STDOUT_FILENO);
}
