/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:52:19 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/12/25 16:25:00 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/** UTILS & GENERAL PURPOSE	**/

/**
 * @brief	Counts the number of characters occupied by the string
 *			representation of a data value.
 *
 * @param data	The data to represent as a string.
 *
 * @return	The length of the data representation as a string.
 */
int	len(void *data);
/**
 * @brief
 *
 * @param c
 * @return int
 */
int	ft_is_sign(char c);
/**
 * @briefº
 *
 * @param c
 * @return int
 */
int	ft_is_digit(char c);
#endif