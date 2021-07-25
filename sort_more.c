/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/25 10:22:34 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_fnum(t_list **na, t_list **nb, int num)
{
	t_list	*stacka;
	int		*array;
	int		j;

	stacka = (*na);
	array = (int *)malloc(num * sizeof(int));
	j = 0;
	while (stacka != NULL && j <= num)
	{
		array[j] = stacka->val;
		stacka = stacka->next;
		j++;
	}
	sort_array(array, num);
	simple_list(array, (*na), num);
	sort_stack(na, nb);
	free(array);
}

void	sort_array(int tab[], int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		i++;
	}
}

void	boucle(int	*head_val,	int	*max_bits, t_list **na, t_list **nb)
{
	int		i;
	int		j;
	int		size;

	size = stack_lenght((*na));
	i = 0;
	while (i < *max_bits)
	{
		j = 0;
		while (j < size)
		{
			*head_val = (*na)->index;
			if (((*(head_val) >> i) & 1) == 1)
				ra(na);
			else
				pb(na, nb);
			j++;
		}
		i++;
		while ((*nb) != NULL)
			pa(na, nb);
	}
}
