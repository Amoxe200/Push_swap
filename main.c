/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/18 18:10:44 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{

	int		num;
	t_list	*node;
	t_list	*node_b;

	num = 0;
	node = NULL;
	node_b = NULL;
	
	parser(argc, argv, node, num);
	checkNumbers(&node, &node_b, num);
	freeList(node);
	freeList(node_b);
	//system("leaks push_swap");
	return (0);
}

int parser(int argc, char *argv[], t_list *node, int num)
{
	int i;
	int value;
	
	i = 1;
		
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
	if ((check_duplicate(node)) > 0)
		{
			printf("Error\n");
			return(0);
		}
	return (1);
}