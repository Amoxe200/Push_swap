/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:22:56 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/08 12:26:37 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sa(t_list **node)
{
	int	tmp;

	printf("sa\n");
	if (*node && (*node)->next)
	{
		tmp = (*node)->val;
		(*node)->val = (*node)->next->val;
		(*node)->next->val = tmp;
	}
}

void	sb(t_list **node)
{
	int	tmp;

	printf("sb\n");
	if (*node && (*node)->next)
	{
		tmp = (*node)->val;
		(*node)->val = (*node)->next->val;
		(*node)->next->val = tmp;
	}
}

void	ss(t_list **nodea, t_list **nodeb)
{
	printf("ss\n");
	sa(nodea);
	sb(nodeb);
}

void	pa(t_list **nodea, t_list **nodeb)
{
	t_list	*new_node;

	printf("pa\n");
	if (*nodeb)
	{
		new_node = *nodeb;
		*nodeb = (*nodeb)->next;
		new_node->next = *nodea;
		*nodea = new_node;
	}
}

void	pb(t_list **nodea, t_list **nodeb)
{
	t_list	*head;

	printf("pb\n");
	if ((*nodea))
	{
		head = (*nodea);
		(*nodea) = (*nodea)->next;
		head->next = *nodeb;
		(*nodeb) = head;
	}
}
