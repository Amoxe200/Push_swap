/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/30 16:26:39 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
        int i;
		int value;
        t_list *node;
        t_list *node_b;
        
        
        i = 1;
		node = NULL;
		node_b = NULL;
        while (i < argc)
        {
			value = ft_atoi(argv[i]);
			push_last(&node, value);
            i++;
        }
		rotatea(&node);
		//print_list(node);
		free(node);
    return (0);
}
