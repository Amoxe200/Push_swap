/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:47:52 by aaqari            #+#    #+#             */
/*   Updated: 2021/06/06 14:14:29 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	if ((*str) == '-')
	{
		str++;
		sign = -1;
	}
	while ((((*str) >= 9 && (*str) <= 13) || (*str) == 32) && (*str))
		str++;
	if ((*str) == '+')
		str++;
	while ((*str) >= '0' && (*str) <= '9')
	{
		if (result < 0 && sign < 0)
			return (0);
		if (result < 0 && sign > 0)
			return (-1);
		result = result * 10 + (*str) - '0';
		str++;
	}
	return (result * sign);
}

void push_last(t_list **node, int val)
{
	t_list *current;
	
	if ((*node) == NULL) {
		(*node) = (t_list *)malloc(sizeof(t_list));
		(*node)->val = val;
		(*node)->next = NULL;
		return ;
	}

	current = (*node);
	while (current->next != NULL)
		current = current->next;
	current->next = (t_list *)malloc(sizeof(t_list));
	current->next->val = val;
	current->next->next = NULL;
}

void print_list(t_list *node)
{
	t_list *current = node;

	while (current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}

void checkNumbers(t_list **node, int num)
{
	if(num <= 3)
		sortTnum(node);
}

void sortTnum(t_list **node)
{
	t_list *head;
	t_list *last;
	t_list *middle;

	int		lenght;
	int 	i;

	last = *node;
	middle = *node;
	head = *node;
	lenght = 1;
	i = 0;
	while (last->next != NULL)
	{
		last = last->next;
		lenght++;
	}
	while (i < lenght/2)
	{
		middle = middle->next;
		i++;
	}
	cc(&head, &middle, &last, node);
}

void cc(t_list **hd, t_list **md, t_list **lt, t_list **nd)
{
	int hv;
	int mv;
	int lv;

	hv = (*hd)->val;
	mv = (*md)->val;
	lv = (*lt)->val;
	checkCase(hv, mv, lv, nd);
}

void checkCase(int hv, int mv, int lv, t_list **nd)
{
	if ((hv > mv) && (mv < lv) && (lv > hv))
		sa(nd);
	if ((hv > mv) && (mv > lv) && (lv < hv))
	{
		sa(nd);
		rra(nd);
	}
	if ((hv > mv) && (mv < lv) && (lv < hv))
		ra(nd);
	if ((hv < mv) && (mv > lv) && (lv > hv))
	{
		sa(nd);
		ra(nd);
	}
	if ((hv < mv) && (mv > lv) && (lv < hv))
		rra(nd);
}