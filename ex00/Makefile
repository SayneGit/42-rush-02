NAME 			= rush-02
SOURCES_FOLDER 	= ./srcs/
HEADER 			= ./includes/
SOURCES 		= $(SOURCES_FOLDER)utils/ft_putchar.c \
					$(SOURCES_FOLDER)utils/ft_putstr.c \
					$(SOURCES_FOLDER)utils/ft_strlen.c \
					$(SOURCES_FOLDER)utils/ft_atoi.c \
					$(SOURCES_FOLDER)parsing/ft_parse.c \
					$(SOURCES_FOLDER)main.c

OBJS = ${SOURCES:.c=.o} 

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
		gcc ${CFLAGS} -o ${NAME} ${OBJS}

fclean: 
		${RM} ${OBJS}
		${RM} ${NAME}