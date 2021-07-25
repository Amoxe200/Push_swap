/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:44:39 by aaqari            #+#    #+#             */
/*   Updated: 2021/07/25 15:48:53 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	int				val;
	int				index;
}				t_list;

t_list		*get_node(int val);
long long	ft_atoi(const char *str);
int			find_min(t_list *stack);
int			check_sorted(t_list **nodea);
int			stack_lenght(t_list *na);
int			ft_isdigit(int c);
int			ft_strlen(char str[]);
int			check_num(char *argv);
int			check_duplicate(t_list *node);
int			parser(int argc, char *argv[], t_list **node_, int *num);
int			find_pos(t_list **node, int min);
int			lenght_cnt(t_list **node);
void		push_last(t_list **node, int val);
void		print_list(t_list *node);
void		sa(t_list **node);
void		sb(t_list **node);
void		ss(t_list **nodea, t_list **nodeb);
void		pa(t_list **nodea, t_list **nodeb);
void		pb(t_list **nodea, t_list **nodeb);
void		ra(t_list **nodea);
void		rotateb(t_list **nodeb);
void		rr(t_list **nodea, t_list **nodeb);
void		rra(t_list **nodea);
void		twNum(t_list **node);
void		reversb(t_list **nodeb);
void		rrr(t_list **nodea, t_list **nodeb);
void		checkNumbers(t_list **node, t_list **nb, int num);
void		sortTnum(t_list **node);
void		cc(t_list **hd, t_list **md, t_list **lt, t_list **nd);
void		caseone(t_list **h, t_list **m, t_list **l);
void		checkCase(int hv, int mv, int lv, t_list **nd);
void		sort_fnum(t_list **na, t_list **nb, int num);
void		push(t_list **na, int val);
void		insertMin(t_list **node, int size, int min);
void		insertMax(t_list **node, int size, int max);
void		sort_array(int tab[], int size);
void		print_array(int tab[], int size);
void		simple_list(int tab[], t_list *na, int num);
void		check_index(t_list *na);
void		sort_stack(t_list **na, t_list **nb);
void		freeList(t_list *node);
void		check_int(long long val);
void		sort_five(t_list **node, t_list **nb);
void		check_min(t_list **node, t_list **nb, int lenght);
void		sort(t_list **node, t_list **nb, int min, int lenght);
void		helper_one(t_list **node, t_list **nb, int pos);
void		helper_two(t_list **node, t_list **nb, int pos);
void		sort_stb(t_list **node, t_list **nb);
void		boucle(int	*head_val,	int	*max_bits, t_list **na, t_list **nb);
void		ft_putchar(char c);
void		print(char *str);
#endif