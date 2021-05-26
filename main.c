/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/26 10:07:48 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int ct_list(t_list *node, int val)
{
	node->val = 1;
	node->next = NULL;
	printf("val inside fun %d\n", node->val);
	return (node->val);
}


int main(int argc, char *argv[])
{
        int i;
		int value;
        t_list *node;
        
        i = 0;
		node = (t_list *)malloc(sizeof(t_list));
		if (node == NULL)
			return (1);
        while (i < argc)
        {
			value = ft_atoi(argv[i]);
            ct_list(node, value);
            i++;
        }
    return (0);
}
