/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_trr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:26:20 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/25 15:35:39 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rrr(t_list **nodea, t_list **nodeb)
{
	print("rrr\n");
	rra(nodea);
	reversb(nodeb);
}

void	freeList(t_list *node)
{
	t_list	*tmp;

	tmp = node;
	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
}

int	check_num(char *argv)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(argv);
	if (size > 11)
	{
		print("Error\n");
		exit(1);
	}
	while (i < size)
	{
		if ((argv[i] == '-') && (!ft_isdigit(argv[i + 1])))
			return (0);
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-'))
		return (1);
	else
		return (0);
}

int	ft_strlen(char str[])
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
