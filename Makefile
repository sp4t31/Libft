# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spatel <spatel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 17:40:11 by spatel            #+#    #+#              #
#    Updated: 2022/04/11 14:08:10 by spatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC_CHAR = ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_tolower.c \
		   ft_toupper.c
# ft_isspace.c

# CONVERSIONS
SRC_CONVERSION = ft_atoi.c \
				 ft_itoa.c

# MEMORY
SRC_MEMORY = ft_bzero.c \
			 ft_calloc.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memset.c \
			 ft_memmove.c

# PRINT
SRC_PRINT = ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c

# STR
SRC_STR = ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c

SRCS =	$(SRC_CHAR) \
		$(SRC_CONVERSION) \
		$(SRC_MEMORY) \
		$(SRC_PRINT) \
		$(SRC_STR)

# LIST (BONUS)
SRC_LIST = ft_lstadd_back.c \
		   ft_lstadd_front.c \
		   ft_lstclear.c \
		   ft_lstdelone.c \
		   ft_lstiter.c \
		   ft_lstlast.c \
		   ft_lstmap.c \
		   ft_lstnew.c \
		   ft_lstsize.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJ		= $(SRCS:.c=.o)
OBJB	= $(SRC_LIST:.c=.o)
RM		= rm -f

all: $(NAME)

$(NAME):
	${CC} ${CFLAGS} -I . -c ${SRCS}
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:
	${CC} ${CFLAGS} -I . -c $(SRCS) ${SRC_LIST}
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib $(NAME)

clean:
	${RM} $(OBJ) $(OBJB)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
