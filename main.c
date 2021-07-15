/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/15 11:58:55 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		value;
	int		num;
	t_list	*node;
	t_list	*node_b;

	i = 1;
	num = 0;
	node = NULL;
	node_b = NULL;
	while (i < argc)
	{
		if(check_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		value = ft_atoi(argv[i]);
		push_last(&node, value);
		num++;
		i++;
	}
	checkNumbers(&node, &node_b, num);
	freeList(node);
	freeList(node_b);
	//system("leaks push_swap");
	return (0);
}
