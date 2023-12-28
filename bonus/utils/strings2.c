/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:33:26 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/28 14:28:37 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	*ft_strdup(char *s1)
{
	int		length;
	char	*dest;
	int		i;

	i = 0;
	length = len(s1);
	dest = (char *)malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dst;
	i = 0;
	while (i < n)
	{
		if (cdest != NULL || csrc != NULL)
			cdest[i] = csrc[i];
		i++;
	}
	return ((void *)cdest);
}
