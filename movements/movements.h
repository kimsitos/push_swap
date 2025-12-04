/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:29:28 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/04 15:38:22 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../list/list.h"
# include "../libft/libft.h"

//push functions
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);

//reverse rotate functions
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

//rotate functions
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

//swap functions
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

#endif