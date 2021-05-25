/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:39 by aaqari            #+#    #+#             */
/*   Updated: 2021/05/23 12:17:22 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
	struct s_list	*next;
	int				val;
}				t_list;
#endif