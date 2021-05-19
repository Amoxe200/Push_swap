/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/19 13:33:14 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    print_list(t_list *head)
{
     t_list *temp = head;
     
     while (temp != NULL)
    {
        printf("next val\n");
        printf("%d\n", temp->val);
        temp = temp->next;
    }
}
void add_last_item(t_list *head, int val)
{
    t_list *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now we can add a new variable
    temp->next = (t_list *)malloc(sizeof(t_list));
    temp->next->val = val;
    temp->next->next = NULL;
}

int main()
{
    t_list *head = NULL;
    head = (t_list *)malloc(sizeof(t_list));
    if (head == NULL)
        return (1);
    head->val = 1;
    head->next = NULL;
    head->next = (t_list *)malloc(sizeof(t_list));
    head->next->val = 2;
    head->next->next = NULL;
    add_last_item(head, head->next->val);
    print_list(head);
    return (0);
}
