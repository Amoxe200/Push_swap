/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/03 13:31:29 by aaqari           ###   ########.fr       */
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
   indexing_list(array, stacka);
    print_list(*na);
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
    while (na != NULL)
    {
        printf("The value of the node is %d\n", na->val);
        printf("his index is %d\n", na->index);
        na = na->next;
    }   
}

void indexing_list(int tab[], t_list *na)
{
    t_list *stacka;
    int i;
    
    i = 0;
    stacka = na;
    while (stacka != NULL)
    {
        if (tab[i] == stacka->val)
            stacka->val = tab[i];
        stacka = stacka->next;
        i++;
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