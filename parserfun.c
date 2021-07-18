/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parserfun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:01:18 by amoxe             #+#    #+#             */
/*   Updated: 2021/07/15 17:42:34 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int check_duplicate(char *argv)
{
    int i;
    int j;
    int size;
    
    i = 0;
    size = ft_strlen(argv);
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (argv[i] == argv[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}