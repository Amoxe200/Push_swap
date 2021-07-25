/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parserfun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:01:18 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/25 15:42:31 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_duplicate(t_list *node)
{
	int		counter;
	t_list	*ptr;

	counter = 0;
	while (node->next != NULL)
	{
		ptr = node->next;
		while (ptr != NULL)
		{
			if (node->val == ptr->val)
			{
				counter++;
				break ;
			}
			ptr = ptr->next;
		}
		node = node->next;
	}
	return (counter);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
