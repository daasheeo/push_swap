/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:32:19 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/20 12:21:35 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !ft_is_sorted(*stack_a))
		ft_do_swap(stack_a, "sa\n");
	else if (stack_size == 3)
		ft_sort_three(stack_a);
	else if (stack_size > 3 && !ft_is_sorted(*stack_a))
		ft_sort(stack_a, stack_b);
}
