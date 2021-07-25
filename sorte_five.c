/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:26:34 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/25 10:36:05 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_five(t_list **node, t_list **nb)
{
	int	lenght;
	int	counter;

	lenght = 0;
	(*nb) = NULL;
	counter = 0;
	while (counter < 2)
	{
		lenght = lenght_cnt(node);
		check_min(node, nb, lenght);
		counter++;
	}
	sortTnum(node);
	sort_stb(node, nb);
}

void	sort_stb(t_list **node, t_list **nb)
{
	pa(node, nb);
	pa(node, nb);
}

int	lenght_cnt(t_list **node)
{
	t_list	*ptr;
	int		counter;

	counter = 0;
	ptr = (*node);
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
