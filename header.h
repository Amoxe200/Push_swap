/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:39 by aaqari            #+#    #+#             */
/*   Updated: 2021/06/12 15:17:27 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define INT_MIN -32767
# define INT_MAX 32767
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
void pa(t_list **nodea, t_list **nodeb);
void pb(t_list **nodea, t_list **nodeb);
void ra(t_list **nodea);
void rotateb(t_list **nodeb);
void rr(t_list **nodea, t_list **nodeb);
void rra(t_list **nodea);
void twNum(t_list **node);
void reversb(t_list **nodeb);
void rrr(t_list **nodea , t_list **nodeb);
void checkNumbers(t_list **node, t_list **nb,int num);
void sortTnum(t_list **node);
void cc(t_list **hd, t_list **md, t_list **lt, t_list **nd);
void caseone(t_list **h, t_list **m, t_list **l);
void checkCase(int hv, int mv, int lv, t_list **nd);
void sort_fnum(t_list **na, t_list **nb);
void push(t_list **na, int val);


t_list* get_node(int val);
void insertMin(t_list **node, int size, int min);
void insertMax(t_list **node, int size, int max);
int     find_min(t_list *stack);
#endif