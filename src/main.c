/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:52:56 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 12:24:16 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;

	if (argc < 2)
		return (0);
	if (!ft_check_parameters(argv, argc) || argv[1][0] == '\0')
		exit_error(NULL, NULL);
	//atexit(print_report);
	stack_b = NULL;
	stack_a = ft_create_stack(argv, argc);
	stack_size = stk_size(stack_a);
	ft_indexer(stack_a, stack_size + 1);
	ft_push_swap(&stack_a, &stack_b, stack_size);
	stk_clear(&stack_a);
	stk_clear(&stack_b);
	return (0);
}
