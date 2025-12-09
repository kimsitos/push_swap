/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 00:43:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/09 04:37:55 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include "../movements/movements.h"
# include "../list/list.h"

t_list	*parse(char **argv);
int		order(t_list *lst);

//case_mov
void	case_swap(char *mov, t_list **a, t_list **b);
void	case_push(char *mov, t_list **a, t_list **b);
void	case_rotate(char *mov, t_list **a, t_list **b);
void	case_reverse_rotate(char *mov, t_list **a, t_list **b);

#endif