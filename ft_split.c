#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char            *sub;        
    char            *aux;
    char            *split[1000];
    unsigned int    count_letters;
    unsigned int    count_strings;
    unsigned int    i;
    

    if(!s)
        return (NULL);
    count_letters = 0;
    count_strings = 0;
    aux = (char *)s;
    while (*s)
    {
        if (*s == c)
        {
            //GENERO UN SUBSTRING SPLITEADO
            sub = (char *)malloc(count_letters + 1);
            if (!sub)
                return (NULL);
            aux -= count_letters;
            
            i = 0;
            while (count_letters > 0)
            {
                sub[i] = aux[i];
                count_letters--;
                i++;
            }
            sub[i] = '\0';
            count_strings++;
            
            //AGREGO AL VECTOR DE SUBSTRINGS
            i = 0;
            count_letters = 0;
            while (i < count_strings)
            {
                while (sub[count_letters] != '\0')
                {
                    split[count_strings][count_letters] = sub[count_letters];
                    count_letters++;
                }
                split[count_strings][count_letters] = '\0';
                i++;
            }


            //HAGO QUE EL SUBSTRING APUNTE A NULL
            sub = NULL;
            
            aux = (char *)s;
        }
        else
            count_letters++;
        s++;
    }
    return split;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char *v = "Hola Terricolas Como Estan";
    char **split = ft_split(v, ' ');
    for (int i = 0;  i < 4; i++)
    {
        printf("Palabra %i: %s", i, split[i]);
    }
    return 0;
}
for (int i = 0; i < s.typr.> MAX_CLINE)