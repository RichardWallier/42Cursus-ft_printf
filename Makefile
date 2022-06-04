SOURCES	=	ft_printf.c ft_printf_utils.c

OBJECTS	=	$(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

NAME = ft_printf.a

AR_RC = ar rc

$(NAME):	$(OBJECTS)
		$(AR_RC) $(NAME) $(OBJECTS)

.c.o:	
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

clean:	$(OBJECTS)
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
