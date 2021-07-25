/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 10:22:07 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/25 15:40:02 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_stack(t_list **na, t_list **nb)
{
	int	max_bits;
	int	head_val;
	int	size;

	size = stack_lenght((*na));
	max_bits = 0;
	while (((stack_lenght((*na)) - 1 ) >> max_bits) != 0)
		max_bits++;
	boucle(&head_val, &max_bits, na, nb);
}

int	stack_lenght(t_list *na)
{
	int	length;

	length = 0;
	while (na != NULL)
	{
		length++;
		na = na->next;
	}
	return (length);
}

void	check_index(t_list *na)
{
	t_list	*ptr;

	ptr = na;
	while (ptr != NULL)
	{
		printf("The val is = %d\n", ptr->val);
		ptr = ptr->next;
	}
}

void	simple_list(int tab[], t_list *na, int num)
{
	t_list	*stack;
	int		i;

	stack = na;
	while (stack != NULL)
	{
		i = 0;
		while (i < num)
		{
			if (tab[i] == stack->val)
				stack->index = i;
			i++;
		}
		stack = stack->next;
	}
}

void	print_array(int tab[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("The element %d is %d\n", i, tab[i]);
		i++;
	}
}
