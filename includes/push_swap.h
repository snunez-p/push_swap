/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:01 by snunez-p          #+#    #+#             */
/*   Updated: 2025/05/14 19:12:16 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"

//poner funciones

typedef struct s_list
{
	int				value;
	int				index_f;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list	*first;
	t_list	*last;
	size_t	size;
}	t_stack;

typedef struct s_box
{
	t_stack	a;
	t_stack	b;
}	t_box;

//operations
//push
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
//swap
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *b, t_stack *a);
//rotate
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
//reverse rotate
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
//srcs
int	chck_num(char *str);
long long ft_atoll(const char *str);
int	chck_int(char *str);

//tools
t_list	*ft_exterminio_total_stack(t_stack *stck);
void	ft_stackadd_front(t_stack *stck, t_list *index);
void	ft_swap_g(t_stack *stck);
void	ft_stackmove_back(t_stack *stck);
void	ft_back2front(t_stack *stck);
t_list	*ft_iterxsize_stack(t_stack *stck);
t_list *ft_stcklstnew(int value);
#endif
