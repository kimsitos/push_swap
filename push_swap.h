/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:46:08 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/08 09:47:33 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "movements/movements.h"
# include "list/list.h"

//push_swap functions
t_list	*parse(char **argv);
int		order(t_list *lst);
int		get_biggest(t_list *lst);
void	set_costs(t_list *lst);
int		get_target(t_list *a, t_list *b);
void	set_target_cost(t_list *a, t_list *b);
void	set_total_cost(t_list **b);
void	move_to_push(t_list **a, t_list **b, t_list *low_mov);

//sort
void	sort_two(t_list **lst);
void	sort_three(t_list **lst);
void	turk_algorithm(t_list **a, t_list **b);

//debuging
void	print_list(t_list *lst);
void	print_list_lite(t_list *lst);
#endif