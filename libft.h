#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include "libft.h"

/* String functions */
size_t  ft_strlen(const char * s1);
size_t 	strlcat(char *dst, const char *src, size_t size);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
void    *ft_memset(void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isalpha(int c);
int 	ft_isprint(int c);
int 	ft_isascii(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);
int     ft_atoi(const char *str);
char    *ft_strdup(const char *s1);
void	*ft_calloc(size_t nmemb, size_t size);

/* Additional Functions */
char *ft_substr(char const *s, unsigned int start, size_t len);

/*Bonus*/
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int     ft_lstsize(t_list *lst);
t_list  *ft_lstnew(void *content);
t_list  *ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
void 	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void 	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
#endif