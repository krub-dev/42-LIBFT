# Name of the executable
NAME = libft.a

# FLAGS
CFLAGS = -g -Wall -Werror -Wextra

# Sources
SRCS = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_strlen.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c ./ft_calloc.c ./ft_strdup.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c

BONUS_SRC = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c ./ft_lstiter_bonus.c ./ft_lstmap_bonus.c

# Headers
HD = libft.h

# Objects
OBJS = $(SRCS:.c=.o)

# Bonus Objects
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Rules

# Target default (when you do make)
all: $(NAME)

# Create the library and compile
$(NAME): $(SRCS) $(OBJS) $(HD)
	@ar -rcs $(NAME) $(OBJS) 

# Take .o, generate .c
%.o: %.c $(HD) Makefile
	cc $(CFLAGS) -c $< -o $@

# Target bonus (when you do make bonus)
bonus: $(BONUS_SRC) $(BONUS_OBJ)
	@ar -rcs $(NAME) $(BONUS_OBJ)

# Clean .o files
clean:
	rm -f $(OBJS) $(BONUS_OBJ)

# Make clean, delete library (libft.a)
fclean: clean
	rm -f $(NAME)

# Fclean and make again
re: fclean all
	
# Always execute this rules, good practice
.PHONY: bonus all clean fclean re
