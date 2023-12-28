/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:21:10 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/28 13:40:56 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <push_swap.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
void	*ft_memcpy(void *dst, void *src, size_t n);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
int		ft_check_instructions(char *line);
void	ft_instructions(char *line, t_stack **stack_a, t_stack **stack_b);
#endif