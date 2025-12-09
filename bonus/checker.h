/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 00:43:36 by stcozaci          #+#    #+#             */
/*   Updated: 2025/12/09 00:46:02 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include "../movements/movements.h"
# include "../list/list.h"

t_list	*parse(char **argv);
int		order(t_list *lst);