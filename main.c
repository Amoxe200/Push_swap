/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/06/03 16:35:15 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
        int i;
		int value;
        int num;
        t_list *node;
        t_list *node_b;
        
        i = 1;
        num = 0;
		node = NULL;
		node_b = NULL;
        while (i < argc)
        {
			value = ft_atoi(argv[i]);
			push_last(&node, value);
            // push_last(&node_b, value);
            num++;
            i++;
        }
        checkNumbers(&node, &node_b, num);
        // print_list(node);
		free(node);
    return (0); 
}
