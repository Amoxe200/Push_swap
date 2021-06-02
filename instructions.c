/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:22:56 by aaqari            #+#    #+#             */
/*   Updated: 2021/06/02 09:59:58 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sa(t_list **node)
{
	int		tmp;

	if (*node && (*node)->next)
	{
		tmp = (*node)->val;
		(*node)->val = (*node)->next->val;
		(*node)->next->val = tmp;
	}
}

void sb(t_list **node)
{
	int		tmp;

	if (*node && (*node)->next)
	{
		tmp = (*node)->val;
		(*node)->val = (*node)->next->val;
		(*node)->next->val = tmp;
	}
}

void ss(t_list **nodea, t_list **nodeb)
{
	sa(nodea);
	sb(nodeb);
}

void pusha(t_list **nodea, t_list **nodeb)
{
	t_list *new_node;

	
	if (*nodeb)
	{
		new_node = *nodeb;
		*nodeb = (*nodeb)->next;
		new_node->next = *nodea;
		*nodea = new_node;	
	}
}

void pushb(t_list **nodea, t_list **nodeb)
{
	t_list *new_node;

	if (*nodea)
	{
		new_node = *nodea;
		*nodea = (*nodea)->next;
		new_node->next = *nodeb;
		*nodea = new_node;
	}
}

void rotatea(t_list **nodea)
{
    t_list *start;
	t_list *last;

	
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

void rotateb(t_list **nodeb)
{
    t_list *start;
	t_list *last;

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

void rr(t_list **nodea, t_list **nodeb)
{
	if ((*nodea) && (*nodeb))
	{
		rotatea(nodea);
		rotateb(nodeb);
	}
}

void reversa(t_list **nodea)
{
	t_list *last;
	t_list *sec_last;

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
		print_list(*nodea);
	}
}

void reversb(t_list **nodeb)
{
	t_list *last;
	t_list *sec_last;


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
		print_list(*nodeb);
	}	
}

void rrr(t_list **nodea , t_list **nodeb)
{
	reversa(nodea);
	reversb(nodeb);
}