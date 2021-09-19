NAME 			= rush-02
SOURCES_FOLDER 	= ./srcs/
HEADER 			= ./includes/
SOURCES 		= $(SOURCES_FOLDER)utils/ft_putchar.c \
					$(SOURCES_FOLDER)utils/ft_putstr.c \
					$(SOURCES_FOLDER)utils/ft_strlen.c \
					$(SOURCES_FOLDER)utils/ft_atoi.c \
					$(SOURCES_FOLDER)utils/ft_split.c \
					$(SOURCES_FOLDER)utils/ft_strcpy.c \
					$(SOURCES_FOLDER)utils/ft_rev_char_tab.c \
					$(SOURCES_FOLDER)utils/ft_strcmp.c \
					$(SOURCES_FOLDER)files/ft_find.c \
					$(SOURCES_FOLDER)files/ft_get_letters.c \
					$(SOURCES_FOLDER)files/ft_search_letters.c \
					$(SOURCES_FOLDER)files/ft_files.c \
					$(SOURCES_FOLDER)parsing/ft_parse.c \
					$(SOURCES_FOLDER)parsing/ft_int_to_string.c \
					$(SOURCES_FOLDER)parsing/ft_errors.c \
					$(SOURCES_FOLDER)algo/ft_algo.c \
					$(SOURCES_FOLDER)main.c

OBJS = ${SOURCES:.c=.o} 

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror -g3

$(NAME): ${OBJS}
		gcc ${CFLAGS} -o ${NAME} ${OBJS}

all:	$(NAME)

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: 	fclean all
