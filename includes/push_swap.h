/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:54:55 by jesmunoz          #+#    #+#             */
/*   Updated: 2024/01/03 10:04:29 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "/Users/jesmunoz/.brew/Cellar/cunit/2.1-3/include/CUnit/Basic.h"
//# include "/Users/jesmunoz/.brew/Cellar/cunit/2.1-3/include/CUnit/CUnit.h"
# include "CUnit/Basic.h"
# include "CUnit/CUnit.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}					t_stack;

int					ft_absolute_value(int n);
int					ft_check_duplicated(char **argv, int argc);
int					ft_check_parameters(char **argv, int argc);
void				ft_calculate_cost(t_stack **stack_a, t_stack **stack_b);
t_stack				*ft_create_stack(char **argv, int argc);
void				ft_do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void				ft_do_double_reverse_rotate(t_stack **stack_a,
						t_stack **stack_b, char *str);
void				ft_do_double_rotate(t_stack **stack_a, t_stack **stack_b,
						char *str);
void				ft_do_push(t_stack **src, t_stack **dest, char *str);
void				ft_do_reverse_rotate(t_stack **stack, char *str);
void				ft_do_rotate_to(t_stack **stack, int *cost, int option);
void				ft_do_rotate(t_stack **stack, char *str);
void				ft_do_swap(t_stack **stack, char *str);
void				ft_double_reverse_rotate(t_stack **stack_a,
						t_stack **stack_b);
void				ft_double_rotate(t_stack **stack_a, t_stack **stack_b);
void				ft_double_swap(t_stack **stack_a, t_stack **stack_b);
void				ft_execute_move(t_stack **stack_a, t_stack **stack_b,
						int cost_a, int cost_b);
void				ft_find_target_position(t_stack **stack_a,
						t_stack **stack_b);
int					ft_find_hightest(t_stack *stack);
int					ft_find_lowest_position(t_stack **stack);
void				ft_indexer(t_stack *stack, int stack_size);
int					ft_is_sorted(t_stack *stack);
int					ft_is_valid_num(char *argv);
int					ft_is_zero(char *argv);
long long int		ft_atoi(const char *str);
void				ft_push_swap(t_stack **stack_a, t_stack **stack_b,
						int stack_size);
void				ft_push(t_stack **src, t_stack **dest);
void				ft_putstr_fd(char *str, int fd);
void				ft_reverse_rotate(t_stack **stack);
void				ft_rotate(t_stack **stack);
void				ft_set_positions(t_stack **stack);
void				ft_sort_three(t_stack **stack);
void				ft_sort(t_stack **stack_a, t_stack **stack_b);
int					ft_strcmp(const char *arg1, const char *arg2);
void				ft_swap(t_stack **stack);
char				**ft_split(char *s, char c);
void				free_lst_memory(char **str);
t_stack				*stk_last(t_stack *stack);
t_stack				*stk_new(int value);
t_stack				*stk_pop_last(t_stack **stack);
t_stack				*stk_pop(t_stack **stack);
void				stk_push(t_stack **stack, t_stack *node);
int					stk_size(t_stack *stack);
t_stack				*stk_top(t_stack *stack);
int					stk_is_empty(t_stack *stack);
void				stk_clear(t_stack **stack);
void				exit_error(t_stack **stack_a, t_stack **stack_b);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strdup(char *s1);
int					len(void *data);
int					ft_is_sign(char c);
int					ft_is_digit(char c);

#endif