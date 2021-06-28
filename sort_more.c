/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/06/28 10:52:13 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort_fnum(t_list **na, t_list **nb)
{   
    t_list *node;
    t_list *nodeb;
    node = (*na);
    nodeb = (*nb);
    while (node->next != NULL)
        {
           find_min(node);
           node = node->next;
        }
}

t_list* get_node(int val)
{
    t_list *new_node;
    new_node = (t_list *)malloc(sizeof(t_list));
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

int     find_min(t_list *stack)
{
    int pos;
    int min;
    t_list *node;
    pos = 0;
    min = INT_MAX;
    while (stack != NULL)
        {
            if (min > stack->val)
            {
                min = stack->val;
                node = stack;
            }
            stack = stack->next;
        }
    return (min);
}