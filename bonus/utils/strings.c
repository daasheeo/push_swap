/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:04:50 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/18 12:51:39 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_strcmp(const char *arg1, const char *arg2)
{
	int	i;
	int	j;

	{
		i = 0;
		j = i;
		if (arg1[i] == '+')
		{
			if (arg2[j] != '+')
				i++;
		}
		else
		{
			if (arg2[j] == '+')
				j++;
		}
		while (arg1[i] != '\0' && arg2[j] != '\0' && arg1[i] == arg2[j])
		{
			i++;
			j++;
		}
		return ((unsigned char)arg1[i] - (unsigned char)arg2[j]);
	}
}

long long int	ft_atoi(const char *str)
{
	short			parity;
	long long int	number;

	parity = 1;
	number = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity = -1;
		++str;
	}
	while (ft_is_digit(*str))
	{
		number = number * 10 + *str - '0';
		++str;
	}
	return (number * parity);
}

int	len(void *data)
{
	int	i;

	i = 0;
	while (((char *)data)[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, len(str));
}

int	compare_tokens(char **tokens_i, char **tokens_j)
{
	int	k;
	int	l;

	k = 0;
	while (tokens_i[k])
	{
		l = 0;
		while (tokens_j[l])
		{
			if (ft_strcmp(tokens_i[k], tokens_j[l]) == 0)
				return (1);
			l++;
		}
		k++;
	}
	return (0);
}
