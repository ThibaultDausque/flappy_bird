CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = src/main.c \
	  src/gravity.c
INCLUDES = -Iincludes -Iminilibx
NAME = flappy_bird
DIR = obj
OBJS = $(SRC:%.c=$(DIR)/%.o)
RM = rm -f


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(INCLUDES) -Lminilibx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(DIR)/%.o: %.c
	@mkdir -p $(@D)
	@cd minilibx && make -s
	@$(CC) $(INCLUDES) -c $< -o $@

clean :
	@rm -rf $(DIR)
	@$(RM) $(OBJS)

fclean :	clean
	@rm -f $(NAME)
	@$(RM) $(NAME)
	@cd minilibx && make clean

re : fclean all

.PHONY: all bonus clean fclean re
