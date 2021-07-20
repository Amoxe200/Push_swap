/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:02:47 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/20 07:40:18 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	twNum(t_list **node)
{
	t_list	*head;

	head = (*node);
	if (head->val > head->next->val)
		sa(node);
}

void	sortTnum(t_list **node)
{
	t_list	*head;
	t_list	*last;
	t_list	*middle;
	int		lenght;
	int		i;

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
	while (i < lenght / 2)
	{
		middle = middle->next;
		i++;
	}
	cc(&head, &middle, &last, node);
}

void	cc(t_list **hd, t_list **md, t_list **lt, t_list **nd)
{
	int	hv;
	int	mv;
	int	lv;

	hv = (*hd)->val;
	mv = (*md)->val;
	lv = (*lt)->val;
	checkCase(hv, mv, lv, nd);
}

void	checkCase(int hv, int mv, int lv, t_list **nd)
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
