# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 10:10:20 by aaqari            #+#    #+#              #
#    Updated: 2021/05/30 14:24:58 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = a.out
CC = gcc
Src = main.c header.h function_utils.c instructions.c
Flags = -Wall -Wextra -Werror -fsanitize=address -g3

all: ${Name}

${Name}: ${Src}
		@$(CC) $(Src) $(Flags)
clean:
		rm -rf $(Name)
fclean:
		rm -rf $(Name)
re : 
		fclean all

