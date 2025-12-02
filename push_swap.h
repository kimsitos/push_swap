/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:46:08 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/02 18:40:30 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

//---LIST-STRUCTURE---
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

//push_swap functions
t_list	*parse(char **argv);
int		order(t_list *lst);

//swap functions
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);

//push functions
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);

//rotate functions
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

//reverse rotate functions
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
//lists functions
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(int));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);

//debuging
void	print_list(t_list *lst);

#endif