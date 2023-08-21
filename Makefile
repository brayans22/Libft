NAME = libft.a

LIBC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c  \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strlcat.c ft_strlcpy.c

ADDITIONAL = ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
             ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			 ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c

BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRCS = ${LIBC} ${ADDITIONAL}

SRCSALL = ${LIBC} ${ADDITIONAL} ${BONUS}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o} 

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

bonus:	${OBJSALL}
		ar -rsc ${NAME} ${OBJSALL}

all: 	${NAME}

clean:	
		rm -f ${OBJSALL}

fclean:	clean;
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
