/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:46:08 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/07 15:17:41 by stcozaci         ###   ########.fr       */
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

//sort
void	sort_two(t_list **lst);
void	sort_three(t_list **lst);
void	turk_algorithm(t_list **a, t_list **b);

//debuging
void	print_list(t_list *lst);
void	print_list_lite(t_list *lst);
#endif