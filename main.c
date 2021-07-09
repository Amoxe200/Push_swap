/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/09 13:09:26 by aaqari           ###   ########.fr       */
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
		value = ft_atoi(argv[i]);
		push_last(&node, value);
		num++;
		i++;
	}
	checkNumbers(&node, &node_b, num);
	free(node);
	return (0);
}
