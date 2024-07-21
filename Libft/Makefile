
# Name of the executable
NAME = libft.a

# FLAGS
CFLAGS = -Wall -Werror -Wextra

# Sources
SRCS = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_strlen.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c ./ft_calloc.c ./ft_strdup.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c
	  
# Headers
HD = libft.h

# Objects
OBJS = $(SRCS:.c=.o)

# Rules

# Target default (when you do make)
all: $(NAME)

# Create the library and compile
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 

# Take .o, generate .c
%.o: %.c $(HD) Makefile
	gcc $(CFLAGS) -c $< -o $@


# Clean .o files
clean:
	rm -f $(OBJS)

# Make clean, delete binary(executable)
fclean: clean
	rm -f $(NAME)

# Fclean and make again
re: fclean all
	
# Always execute this rules, good practice
.PHONY: all clean fclean re
