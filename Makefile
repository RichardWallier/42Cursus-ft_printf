# SOURCES	=	ft_printf.c ft_printf_utils.c

# OBJECTS	=	$(SOURCES:.c=.o)

# CC = cc

# CFLAGS = -Wall -Werror -Wextra

# RM = rm -rf

# NAME = ft_printf.a

# AR_RC = ar rc

# $(NAME):	$(OBJECTS)
# 		$(AR_RC) $(NAME) $(OBJECTS)

# .c.o:	
# 	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# all:	$(NAME)

# clean:	$(OBJECTS)
# 	$(RM) $(OBJECTS)

# fclean:	clean
# 	$(RM) $(NAME)

# re:	fclean all

#.PHONY: all clean fclean re

LIBFT_PATH =./libft
LIBFT =		$(LIBFT_PATH)/libft.a

SOURCES =	ft_printf.c ft_printf_utils.c

OBJECTS =	$(SOURCES:.c=.o)

NAME =		libftprintf.a

CC =		clang
CGLAGS =	-Wextra -Wall -Werror

ARFLAGS =	rcs
AR =		ar
RM =		rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:		$(LIBFT) $(NAME)

$(NAME):	 $(OBJECTS)
			cp	$(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT):
			$(MAKE) -C $(LIBFT_PATH)
			$(MAKE) -C $(LIBFT_PATH) bonus

clean:
			$(MAKE) -C $(LIBFT_PATH) clean
			$(RM) $(OBJECTS)

fclean:		clean
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(RM) $(NAME)

re:			fclean all

exe:
			clear && clang ft_printf.c libftprintf.a && ./a.out

.PHONY:		all clean fclean re libft
