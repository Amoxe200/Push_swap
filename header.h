/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:39 by aaqari            #+#    #+#             */
/*   Updated: 2021/06/06 14:08:46 by amoxe            ###   ########.fr       */
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
void ra(t_list **nodea);
void rotateb(t_list **nodeb);
void rr(t_list **nodea, t_list **nodeb);
void rra(t_list **nodea);
void reversb(t_list **nodeb);
void rrr(t_list **nodea , t_list **nodeb);
void checkNumbers(t_list **node, int num);
void sortTnum(t_list **node);
void cc(t_list **hd, t_list **md, t_list **lt, t_list **nd);
void caseone(t_list **h, t_list **m, t_list **l);
#endif