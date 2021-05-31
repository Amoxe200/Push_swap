/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:22:56 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/30 17:11:30 by aaqari           ###   ########.fr       */
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
    t_list *temp;

    if (*nodea)
    {
        temp = *nodea;
        *nodea = (*nodea)->next;
        printf("----------------------\n");
        print_list(*nodea);
        printf("----------------------\n");
        print_list(temp);
    }
    
}