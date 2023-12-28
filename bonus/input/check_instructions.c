/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:18:03 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/27 15:35:11 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <push_swap.h>

int	ft_check_instructions(char *line)
{
	if (!ft_strcmp(line, "sa\n") || !ft_strcmp(line, "sb\n") || !ft_strcmp(line,
			"ss\n") || !ft_strcmp(line, "pa\n") || !ft_strcmp(line, "pb\n")
		|| !ft_strcmp(line, "ra\n") || !ft_strcmp(line, "rb\n")
		|| !ft_strcmp(line, "rr\n") || !ft_strcmp(line, "rra\n")
		|| !ft_strcmp(line, "rrb\n") || !ft_strcmp(line, "rrr\n"))
		return (1);
	return (0);
}
