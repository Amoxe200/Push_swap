/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/04 10:26:40 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort_fnum(t_list **na, t_list **nb, int num)
{
    t_list *stacka;
    t_list *stackb;
    int array[num];
     int j;
     
    stacka = (*na);
    stackb = (*nb);
    j = 0;
    while (stacka != NULL && j <= num)
    {
        array[j] = stacka->val;
        stacka = stacka->next;
        j++;
    }
   sort_array(array, num);
   indexing_list(array, (*na), num);
   check_index((*na));
}

void sort_array(int tab[], int size)
{
    int i;
    int j;
    int a;
    
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                a = tab[i];
                tab[i] = tab[j];
                tab[j] = a;
            }
            j++;
        }
        i++;
    }
    print_array(tab, size);
}

void check_index(t_list *na)
{
    t_list *ptr;

    ptr = na;
    while (ptr != NULL)
    {
        printf("The val is = %d\n", ptr->val);
        printf("His index is %d\n", ptr->index);
        ptr = ptr->next;
    }
}

void indexing_list(int tab[], t_list *na, int num)
{
    t_list *stack;
    int i;
    
    stack = na;
    
    while (stack != NULL)
    {
        i = 0;
        while (i < num)
        {
            if (tab[i] == stack->val)
                stack->index = i;
            i++;
        }
        stack = stack->next;
    }
}

void print_array(int tab[], int size)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        printf("The element %d is %d\n", i , tab[i]);
        i++;
    }
}