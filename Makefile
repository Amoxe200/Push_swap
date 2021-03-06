# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 10:10:20 by aaqari            #+#    #+#              #
#    Updated: 2021/07/25 10:36:52 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = push_swap
CC = gcc
Src = main.c function_utils.c instructions.c sort_three.c sort_more.c instruction_two.c instruction_trr.c parserfun.c sorte_five.c helper.c helper_two.c
Obj = ${Src:.c=.o}
Flags = -Wall -Wextra -Werror -g 

all: ${Name}

${Name}:
		@$(CC) $(Src) $(Flags) -o ${Name}
clean:
		rm -rf $(Obj)
fclean: clean
		rm -rf $(Name)
re : fclean all