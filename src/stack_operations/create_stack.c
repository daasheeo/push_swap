/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 10:34:10 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*stk_new(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

void	stk_push(t_stack **stack, t_stack *node)
{
	t_stack	*last;

	last = stk_last(*stack);
	if (node == NULL)
		return ;
	if (!last)
		*stack = node;
	else
		last->next = node;
}

t_stack	*ft_create_stack(char **argv, int argc)
{
	t_stack			*stack_a;
	char			**token;
	int				i;
	int				j;
	long long int	nb;

	i = 1;
	stack_a = NULL;
	while (i < argc)
	{
		j = -1;
		token = ft_split(argv[i], ' ');
		if (!token)
			exit_error(NULL, NULL);
		while (token[++j])
		{
			nb = ft_atoi(token[j]);
			if (nb < INT_MIN || nb > INT_MAX)
				exit_error(NULL, NULL);
			stk_push(&stack_a, stk_new(nb));
		}
		free_lst_memory(token);
		i++;
	}
	return (stack_a);
}
