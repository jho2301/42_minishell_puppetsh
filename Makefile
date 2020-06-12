SRCS = $(wildcard src/*.c) $(wildcard src/*/*.c)
OBJS = $(SRCS:.c=.o)
NAME = minishell
INCLUDE = include
LIB = libft.a
LIB_DIR = src/libft
RM = rm -f
CC = gcc
CFLAGS = 

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDE)
all:		$(NAME)

$(NAME):	$(OBJS) $(LIB)
			cp $(LIB_DIR)/$(LIB) $(NAME)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
$(LIB):
			make -C $(LIB_DIR)
clean:
			make -C $(LIB_DIR) clean
			$(RM) $(OBJS)
fclean:		clean
			make -C $(LIB_DIR) fclean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re .c.o
