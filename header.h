/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:39 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/30 15:56:49 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	int				val;
}				t_list;

int	ft_atoi(const char *str);
void push_last(t_list **node, int val);
void print_list(t_list *node);
void sa(t_list **node);
void sb(t_list **node);
void ss(t_list **nodea, t_list **nodeb);
void pusha(t_list **nodea, t_list **nodeb);
void pushb(t_list **nodea, t_list **nodeb);
void rotatea(t_list **nodea);
#endif