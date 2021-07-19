/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:26:34 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/20 00:56:18 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    sort_five(t_list **node, t_list **nb)
{

    int lenght;
    int counter;

    lenght = 0;
    (*nb) = NULL;
    counter = 0;

    while (counter < 2)
    {
        lenght = lenght_cnt(node);
        check_min(node, nb, lenght);
        counter++;
    }
    sortTnum(node);
    sort_stb(node, nb);
    print_list((*node));
}

void sort_stb(t_list **node, t_list **nb)
{
    pa(node, nb);
    pa(node, nb);
}

int lenght_cnt(t_list **node)
{
    t_list *ptr;
    int counter;

    counter = 0;
    ptr = (*node);
    while (ptr != NULL)
    {
        counter++;
        ptr = ptr->next;
    }
    return (counter);
}
        
void check_min(t_list **node, t_list **nb, int lenght)
{
    t_list *ptr;
    int min;

    ptr = (*node);
    min = INT_MAX;

    while (ptr != NULL)
    {
        if (ptr->val < min)
            min = ptr->val;
        ptr = ptr->next;
    }
    sort(node, nb, min, lenght);
}

void sort(t_list **node, t_list **nb, int min, int lenght)
{
    int pos;
    pos = find_pos(node, min);
    if (lenght == 5)
        helper_one(node, nb, pos);
    else if (lenght == 4)
        helper_two(node, nb, pos);
}

void helper_one(t_list **node, t_list **nb, int pos)
{
    if (pos == 0)
        pb(node, nb);
    else if (pos == 1)
    {
        sa(node);
        pb(node, nb);
    }
    else if (pos == 2)
    {
        rra(node);
        rra(node);
        rra(node);
        pb(node, nb);
    }
    else if (pos == 3)
    {
        rra(node);
        rra(node);
        pb(node, nb);
    }
    else if (pos == 4)
    {
        rra(node);
        pb(node, nb);
    }
}

void helper_two(t_list **node, t_list **nb, int pos)
{
    if (pos == 0)
        pb(node, nb);
    else if (pos == 1)
    {
        sa(node);
        pb(node, nb);
    }
    else if (pos == 2)
    {
        rra(node);
        rra(node);
        pb(node, nb);
    }
    else if (pos == 3)
    {
        rra(node);
        pb(node, nb);
    }
}

int find_pos(t_list **node, int min)
{
    t_list *ptr;
    int    count;
    
    ptr = (*node);
    count = 0;
    while (ptr != NULL)
    {
        if (ptr->val == min)
            return (count);
        else
            count++;
        ptr = ptr->next;
    }
    return (0);
}