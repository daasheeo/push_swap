/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:18:23 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 16:03:00 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static char	***allocate_tokens(int argc)
{
	char	***tokens;

	tokens = malloc(sizeof(char **) * (argc + 1));
	if (!tokens)
		exit_error(NULL, NULL);
	return (tokens);
}

static void	fill_tokens(char ***tokens, char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		tokens[i] = ft_split(argv[i], ' ');
		if (!tokens[i])
			exit_error(NULL, NULL);
		i++;
	}
	tokens[i] = NULL;
}

static int	is_duplicated(char ***tokens, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (compare_tokens(tokens[i], tokens[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_duplicated(char **argv, int argc)
{
	char	***tokens;
	int		result;

	tokens = allocate_tokens(argc);
	fill_tokens(tokens, argv, argc);
	result = is_duplicated(tokens, argc);
	free_tokens(tokens, argc);
	return (result);
}
