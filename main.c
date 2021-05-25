/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/25 16:47:11 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


// creat a function that prints all the items of the list
void print_list(t_list *head)
{
    t_list *current = head;
    while (current != NULL)
    {
        printf("list = %d\n", current->val);
        current = current->next;
    }
}

// move to the last node of the list and add a value
void    push_last_item(t_list *head, int val)
{
    t_list *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = (t_list *)malloc(sizeof(t_list));
    current->next->val = val;
    current->next->next = NULL;
}

// adding an item to the beginning of the list
    // create a new item and set it's value 
    // link the new item to point to the head of the list 
    // set the head of the list to be our new item
void push_start(t_list **head, int val)
{
    t_list *current;
    current = (t_list *)malloc(sizeof(t_list));
    current->val = val;
    current->next = *head;
    *head = current;
}
// removing the first item
void removing_the_first_item(t_list **head)
{
    t_list *current;
    current = (t_list *)malloc(sizeof(t_list));
    
}

int main()
{
    t_list *head = NULL;
    head = (t_list *)malloc(sizeof(t_list));
    if (head == NULL)
        return (1);
    head->val = 1;
    head->next = (t_list *)malloc(sizeof(t_list));
    head->next->val = 2;
    head->next->next = (t_list *)malloc(sizeof(t_list));
    head->next->next->val = 3;
    head->next->next->next = NULL;
    print_list(head);
    push_last_item(head, 100);
    printf("--------------------\n");
    print_list(head);
    printf("--------------------\n");
    push_start(&head, 100);
    print_list(head);
    return (0);
}
