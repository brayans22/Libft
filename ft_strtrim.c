#include "libft.h"

char 	*ft_strtrim(char const *s1, char const *set)
{
    char            *result;  
    const char      *first; 
    unsigned int    i;
    unsigned int    start;

    if (!s1 || !set)
        return (NULL);
    first = set;
    start = 0;
    i = 0;
    while (*s1 && *set)
    {
        set = first;
        while(*s1 != *set && *set)
            set++;
        if (*set == '\0')
        {
            result = (char *)malloc(ft_strlen(s1) - start + 2);
            if (!result)
                return (NULL);
            while (*s1)
            {
                result[i++] = *s1;
                s1++;
            }
            result[i] = '\0';
            return (result);
        }
        start++;
        s1++;
    }
    result = (char *)malloc(1);
    if (!result)
        return (NULL);
    result[i] = '\0';
    return (result);
}


#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int				main(int argc, const char *argv[])
{
	char	set [] = "\t \n";
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		check_strtrim(s1, set);
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet \n \t ";
		check_strtrim(s1, set);
	}
	else if (arg == 3)
	{
		char s1[] = " \n \t lorem ipsum dolor sit amet";
		check_strtrim(s1, set);
	}
	else if (arg == 4)
	{
		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
		check_strtrim(s1, set);
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		check_strtrim(s1, set);
	}
	return (0);
}