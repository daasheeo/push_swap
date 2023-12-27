/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:58:05 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/26 10:21:06 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_is_valid_num(char *argv)
{
	int	i;

	i = 0;
	if (ft_is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	if (argv[i] == '0')
	{
		i++;
		while (argv[i] == '+' || argv[i] == '-')
		{
			i++;
			if (argv[i] == '0')
				i++;
			else
				return (0);
		}
		return (argv[i] == '\0');
	}
	while (argv[i] && ft_is_digit(argv[i]))
		i++;
	return (argv[i] == '\0' || (argv[i] == '0' && !ft_is_digit(argv[i + 1])));
}

int	ft_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (ft_is_sign(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_sign(char c)
{
	return (c == '-' || c == '+');
}
