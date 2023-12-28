/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:24:04 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/27 15:48:43 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>

static void	ft_loop(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	line = NULL;
	while (1)
	{
		line = get_next_line(STDIN_FILENO);
		if (!line)
			break ;
		if (!ft_check_instructions(line))
			exit_error(stack_a, stack_b);
		ft_instructions(line, stack_a, stack_b);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	stack_b = NULL;
	if (!ft_check_parameters(argv, argc) || argv[1][0] == '\0')
		exit_error(NULL, NULL);
	stack_a = ft_create_stack(argv, argc);
	if (!stack_a)
		exit_error(NULL, NULL);
	ft_loop(&stack_a, &stack_b);
	if (ft_is_sorted(stack_a) && stack_b == NULL)
		write(STDOUT_FILENO, "OK\n", 3);
	else
		write(STDOUT_FILENO, "KO\n", 3);
	stk_clear(&stack_a);
	stk_clear(&stack_b);
	return (0);
}
