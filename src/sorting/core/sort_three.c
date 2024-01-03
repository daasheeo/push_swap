/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:49:04 by jesmunoz          #+#    #+#             */
/*   Updated: 2024/01/02 10:21:21 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort_three(t_stack **stack)
{
	int	highest;

	highest = ft_find_hightest(*stack);
	if ((*stack)->index == highest)
		ft_do_rotate(stack, "ra\n");
	else if ((*stack)->next->index == highest)
		ft_do_reverse_rotate(stack, "rra\n");
	if ((*stack)->index > (*stack)->next->index)
		ft_do_swap(stack, "sa\n");
}
