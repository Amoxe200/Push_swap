/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/06/10 12:07:16 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort_fnum(t_list **na, t_list **nb)
{   

    t_list *head;
    t_list *ls;
    int bigVal;
    int smallVall;
    
    head = (*na);
    ls = (*nb);
    bigVal = INT_MIN;
    smallVall = INT_MAX;
    while(head->next != NULL)
    {
        if (bigVal < head->val)
            bigVal = head->val;
        if (smallVall > head->val)
        {
            printf("head val = %d\n", head->val);
            smallVall = head->val;
        }
        head = head->next;
    }
     printf("%d\n", bigVal);
     printf("smaal val = %d\n", smallVall);
}