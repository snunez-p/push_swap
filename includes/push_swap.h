/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:01 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/25 20:35:38 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index_f;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	t_list			*first;
	t_list			*last;
	size_t			size;
}					t_stack;

typedef struct s_box
{
	t_stack			a;
	t_stack			b;
}					t_box;

// operations
// push
void				pb(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
// swap
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *b, t_stack *a);
// rotate
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
// reverse rotate
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

// short sorts
// short sorts
void				sort_2(t_stack *a);
void				sort_3(t_stack *a);
void				sort_3_conditions(t_stack *a, int first, int second,
						int third);
void				sort_4(t_stack *a, t_stack *b);
// short sorts 2
void				sort_5(t_stack *a, t_stack *b);
void				sort_6(t_stack *a, t_stack *b);
void				sort_7(t_stack *a, t_stack *b);

// srcs
// checks
int					chck_num(char *str);
long long			ft_atoll(const char *str);
int					chck_int(char *str);
int					chck_ifdouble(int size, char **stck);
int					is_sorted(t_stack stck);
// checks2.0
int					validate_args(int size, char **args);
// ksort
void				indexes(t_stack *stck);
void				push2b(t_stack *a, t_stack *b);
void				pushbck2a(t_stack *a, t_stack *b);
void				ksort(t_stack *a, t_stack *b);
// parseo
void				parseo(t_box *stck, int ac, char **av);
void				error_exit(char **args_split);
char				**split_args(char **args);
void				free_split(char **args_split);

// tools
void				bring_to_top(t_stack *a, int pos);
void				ft_back2front(t_stack *stck);
t_list				*ft_exterminio_total_stack(t_stack *stck);
int					ft_findp(t_stack *a, int value);
t_list				*ft_iterxsize_stack(t_stack *stck);
void				ft_stackadd_front(t_stack *stck, t_list *index);
void				ft_stackmove_back(t_stack *stck);
void				ft_stckaddback(t_stack *stck, t_list *index);
void				ft_stcklstclear(t_stack *stck);
t_list				*ft_stcklstnew(int value);
void				ft_swap_g(t_stack *stck);
// min&max_occ
int					min_occ(t_stack *stck);
int					max_occ(t_stack *stck);
// tbo
int					getbiggest(t_stack *stck, t_list **biggie);
void				move_tbo_2top(t_stack *stck);

#endif
