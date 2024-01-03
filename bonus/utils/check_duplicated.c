/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:18:23 by jesmunoz          #+#    #+#             */
/*   Updated: 2024/01/02 10:05:42 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>

static char	*join_args(int argc, char **argv)
{
	char	*joined;
	int		i;

	i = 1;
	joined = ft_strdup("");
	if (!joined)
		exit_error(NULL, NULL);
	while (i < argc)
	{
		joined = ft_strjoin(joined, argv[i]);
		if (!joined)
			exit_error(NULL, NULL);
		joined = ft_strjoin(joined, " ");
		if (!joined)
			exit_error(NULL, NULL);
		i++;
	}
	return (joined);
}

int	ft_check_duplicated(char **argv, int argc)
{
	char	**tokens;
	int		i;
	int		j;

	tokens = ft_split(join_args(argc, argv), ' ');
	if (!tokens)
		exit_error(NULL, NULL);
	i = 0;
	while (tokens[i])
	{
		j = 0;
		while (tokens[j])
		{
			if (i != j && ft_strcmp(tokens[i], tokens[j]) == 0)
			{
				free_lst_memory(tokens);
				return (1);
			}
			j++;
		}
		i++;
	}
	free_lst_memory(tokens);
	return (0);
}
