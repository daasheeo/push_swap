/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:24:04 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 18:21:02 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>


int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	if (argc < 2)
		return (0);
	stack_b = NULL;
	line = NULL;
	if (!ft_check_parameters(argv, argc) || argv[1][0] == '\0')
		exit_error(NULL, NULL);
	stack_a = ft_create_stack(argv, argc);
	while (1)
	{
		line = get_next_line(STDIN_FILENO);
		if (!line)
			break ;
		if (!ft_check_instructions(line))
			exit_error(&stack_a, &stack_b);
		ft_instructions(line, &stack_a, &stack_b);
		free(line);
	}
	if (ft_is_sorted(stack_a) && stack_b == NULL)
		write(STDOUT_FILENO, "OK\n", 3);
	else
		write(STDOUT_FILENO, "KO\n", 3);
	stk_clear(&stack_a);
	stk_clear(&stack_b);
	return (0);
}
