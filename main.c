/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:32 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/19 20:01:34 by aaqari           ###   ########.fr       */
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

	parser(argc, argv, &node, &num);
	checkNumbers(&node, &node_b, num);
	freeList(node);
	freeList(node_b);
	//system("leaks push_swap");
	return (0);
}

int     parser(int argc, char *argv[], t_list **node_, int *num)
{
    int i;
    long long value;
 
    i = 1;
	if (argc == 1)
		exit(1);
    while (i < argc)
    {
        if(check_num(argv[i]) == 0)
        {
            printf("Error\n");
            exit (1);
        }
        value = ft_atoi(argv[i]);
        check_int(value);
        push_last(node_, value);
        (*num)++;
        i++;
    }
    if ((check_duplicate(*node_)) > 0)
    {
        printf("Error\n");
        exit(1);
    }
    return (1);
}

void    check_int(long long val)
{
    if (val > MAX_INT || val < MIN_INT)
    {
        printf("Error\n");
        exit(1);
    }
}