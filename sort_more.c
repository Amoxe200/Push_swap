/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:54:26 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/15 14:23:34 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_fnum(t_list **na, t_list **nb, int num)
{
	t_list	*stacka;
    int		array[num];
    int		j;

	stacka = (*na);
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
    // print_list(*na);
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

void	sort_stack(t_list **na, t_list **nb)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	j;
	int	head_val;
	int	size;
    
	size = stack_lenght((*na));
	max_num = stack_lenght((*na)) - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++; 
	while (i < max_bits)
	{
		j = 0;
        while (j < size)
        {
            head_val = (*na)->index;
            if (((head_val >> i)&1) == 1)
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

int stack_lenght(t_list *na)
{
    int length;
    
    length = 0;
    while (na != NULL)
        {
            length++;
            na = na->next;
        }
    return (length);
}

void check_index(t_list *na)
{
    t_list *ptr;

    ptr = na;
    while (ptr != NULL)
    {
        printf("The val is = %d\n", ptr->val);
        ptr = ptr->next;
    }
}

void simple_list(int tab[], t_list *na, int num)
{
    t_list *stack;
    int i;
    
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

void print_array(int tab[], int size)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        printf("The element %d is %d\n", i , tab[i]);
        i++;
    }
}
