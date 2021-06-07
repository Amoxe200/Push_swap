# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 10:10:20 by aaqari            #+#    #+#              #
#    Updated: 2021/06/06 17:03:56 by amoxe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = a.out
CC = gcc
Src = main.c header.h function_utils.c instructions.c sort_three.c
Flags = -Wall -Wextra -Werror

all: ${Name}

${Name}: ${Src}
		@$(CC) $(Src) $(Flags)
clean:
		rm -rf $(Name)
fclean:
		rm -rf $(Name)
re : 
		fclean all

