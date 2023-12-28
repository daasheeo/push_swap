/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:18:23 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/28 14:19:45 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>

char	*join_args(int argc, char **argv)
{
	char	*joined;
	int		i;

	i = 1;
	joined = ft_strdup("");
	while (i < argc)
	{
		joined = ft_strjoin(joined, argv[i]);
		joined = ft_strjoin(joined, " ");
		i++;
	}
	return (joined);
}

int	ft_check_duplicated(char **argv, int argc)
{
	char	*joined;
	char	**tokens;
	int		i;
	int		j;

	joined = join_args(argc, argv);
	tokens = ft_split(joined, ' ');
	i = 0;
	while (tokens[i])
	{
		j = 0;
		while (tokens[j])
		{
			if (i != j && ft_strcmp(tokens[i], tokens[j]) == 0)
			{
				free(joined);
				free_lst_memory(tokens);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(joined);
	free_lst_memory(tokens);
	return (0);
}

