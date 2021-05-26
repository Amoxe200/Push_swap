/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/26 11:22:55 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


void push_front(t_list **node, int val)
{
	t_list *current;
	
	if ((*node) == NULL) {
		(*node) = (t_list *)malloc(sizeof(t_list));
		(*node)->val = val;
		(*node)->next = NULL;
		return ;
	}

	current = (*node);
	while (current->next != NULL)
		current = current->next;
	current->next = (t_list *)malloc(sizeof(t_list));
	current->next->val = val;
	current->next->next = NULL;
	
}

void print_list(t_list *node)
{
	t_list *current = node;

	while (current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}

int main(int argc, char *argv[])
{
        int i;
		int value;
        t_list *node;
        
        i = 1;
		node = NULL;
        while (i < argc)
        {
			value = ft_atoi(argv[i]);
			push_front(&node, value);
            i++;
        }
		print_list(node);
		free(node);
    return (0);
}
