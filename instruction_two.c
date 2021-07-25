/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:24:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/25 15:35:46 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ra(t_list **nodea)
{
	t_list	*start;
	t_list	*last;

	print("ra\n");
	if (*nodea)
	{
		start = *nodea;
		last = *nodea;
		while (last->next != NULL)
			last = last->next;
		*nodea = start->next;
		start->next = NULL;
		last->next = start;
	}
}

void	rotateb(t_list **nodeb)
{
	t_list	*start;
	t_list	*last;

	print("rb\n");
	if (*nodeb)
	{
		start = *nodeb;
		last = *nodeb;
		while (last->next != NULL)
			last = last->next;
		*nodeb = start->next;
		start->next = NULL;
		last->next = start;
	}
}

void	rr(t_list **nodea, t_list **nodeb)
{
	print("rr\n");
	if ((*nodea) && (*nodeb))
	{
		ra(nodea);
		rotateb(nodeb);
	}
}

void	rra(t_list **nodea)
{
	t_list	*last;
	t_list	*sec_last;

	print("rra\n");
	if (*nodea)
	{
		sec_last = NULL;
		last = (*nodea);
		while (last->next != NULL)
		{
			sec_last = last;
			last = last->next;
		}
		sec_last->next = NULL;
		last->next = *nodea;
		*nodea = last;
	}
}

void	reversb(t_list **nodeb)
{
	t_list	*last;
	t_list	*sec_last;

	print("rrb\n");
	if (*nodeb)
	{
		sec_last = NULL;
		last = (*nodeb);
		while (last->next != NULL)
		{
			sec_last = last;
			last = last->next;
		}
		sec_last->next = NULL;
		last->next = *nodeb;
		*nodeb = last;
	}
}
