/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:34:53 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/22 18:24:44 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	free_lst_memory(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

size_t	ft_big_array_size(char const *s, char c)
{
	size_t	n_words;
	int		trigger;

	n_words = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			n_words++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (n_words);
}

char	*ft_word_dup(const char *s1, int start, int finish)
{
	char	*res_word;
	int		i;

	i = 0;
	res_word = malloc((finish - start + 1) * sizeof(char));
	if (!res_word)
		return (NULL);
	while (start < finish)
		res_word[i++] = s1[start++];
	res_word[i] = '\0';
	return (res_word);
}

char	**ft_split(char *s, char c)
{
	char	**big_array;
	int		i;
	int		j;
	int		index;

	big_array = malloc((ft_big_array_size(s, c) + 1) * sizeof(char *));
	if (!big_array || !s)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= len(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == len(s)) && index >= 0)
		{
			big_array[j++] = ft_word_dup(s, index, i);
			if (!big_array[j - 1])
				return (free_lst_memory(big_array), NULL);
			index = -1;
		}
	}
	return (big_array[j] = 0, big_array);
}
