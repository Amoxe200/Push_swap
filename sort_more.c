/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/06/11 12:25:36 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort_fnum(t_list **na, t_list **nb)
{   

    t_list *head;
    t_list *bigVal;
    t_list *smallVal;
    int min;
    int max;
    int size;
    
    (*nb) = NULL;
    head = (*na);
    bigVal = (*na);
    smallVal = (*na);
    max = INT_MIN;
    min = INT_MAX;
    size = 0;
    
    while (head != NULL)
    {
        if (max < head->val)
            max = head->val;
        if (min > head->val)
            min = head->val;
        head = head->next;
        size++;
    }
    insertMin(na, size, min);
    print_list((*na));
    printf("--------\n");
    insertMax(na, size, max);
    print_list((*na));
}

void insertMin(t_list **node, int size, int min)
{
    t_list *temp;
    
    while (size--)
    {
        if (size == 0)
        {
            temp = get_node(min);
            temp->next = (*node)->next;
            (*node) = temp;
        }
        else 
            (*node) = (*node)->next;
    }
}

void insertMax(t_list **node, int size, int max)
{
    t_list *temp;
    while (size--)
    {
        if (size == 1)
        {
            temp = get_node(max);
            temp->next = (*node)->next;
            (*node) = temp;
        }
        else
            (*node) = (*node)->next;
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