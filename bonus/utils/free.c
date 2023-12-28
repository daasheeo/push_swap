/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:13:28 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/28 13:08:54 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	free_tokens(char ***tokens, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
		free_lst_memory(tokens[i++]);
	free(tokens);
}
