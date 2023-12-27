/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:00:35 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 16:00:04 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_check_parameters(char **argv, int argc)
{
	int		i;
	int		j;
	int		c_zero;
	char	**token;

	i = 1;
	c_zero = 0;
	while (argv[i])
	{
		token = ft_split(argv[i], ' ');
		if (!token)
			exit_error(NULL, NULL);
		j = -1;
		while (token[++j])
		{
			if (!ft_is_valid_num(token[j]))
				return (0);
			c_zero += ft_is_zero(token[j]);
		}
		free_lst_memory(token);
		i++;
	}
	if (c_zero > 1 || ft_check_duplicated(argv, argc))
		return (0);
	return (1);
}
