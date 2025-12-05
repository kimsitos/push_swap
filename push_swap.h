/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:46:08 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/05 12:50:49 by stcozaci         ###   ########.fr       */
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

//sort
void	sort_two(t_list **lst);
void	sort_three(t_list **lst);

//debuging
void	print_list(t_list *lst);

#endif