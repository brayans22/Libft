#include "libft.h"

char  *rev_string(char *str, size_t size)
{
    int    half;
    int    i;
    char   tmp;

    half = size / 2;
    tmp = 0;
    i = 0;
    if (str[0] == '-')
        i = 1;
    while (half > 0)
    {
        tmp = str[i];
        str[i] = str[size - 1];
        str[size - 1] = tmp;
        size--;
        half--;
        i++;
    }
    return (str);
}

char *convert_int_to_string(int n)
{
    char          digits[12];
    unsigned int  i;
    int           digit;

    i = 0;
    if (n < 0)
    {
        n = -n;
        digits[i++] = '-';
    }

    while (n > 0)
    {
        digit = n % 10;
        digits[i] = digit + '0';
        n = n / 10;
        i++;
    }
    digits[i] = '\0';
    return (rev_string(ft_strdup(digits), i));
}

char *ft_itoa(int n)
{
    if (n == 0)
        return (ft_strdup("0"));
    else if (n < -2147483647)
        return (ft_strdup("-2147483648"));
    else if (n > 2147483647)
        return (ft_strdup("2147483647"));
    return (convert_int_to_string(n));
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("%s\n", ft_itoa(-567));
    printf("%s\n", ft_itoa(-3242));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(12242));
    printf("%s\n", ft_itoa(234324));
    printf("%p\n", ft_itoa(-2147483648LL));
}
*/
