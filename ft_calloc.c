#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *memory;

    memory = (void *)malloc(nmemb * size);
    if(!memory || nmemb == 0 || size == 0 || (nmemb * size) > 2147483647)
        return (NULL);
    ft_bzero(memory, nmemb * size);
    return (memory);
}
/*
The  calloc()  function  allocates memory for an array of nmemb elements of size
bytes each and returns a pointer to the allocated memory.  The memory is set  to
zero.   If  nmemb  or  size is 0, then calloc() returns either NULL, or a unique
pointer value that can later be successfully passed to free().  If the multipli‐
cation of nmemb and size would result in integer overflow, then calloc() returns
an error.  By contrast, an integer overflow would not be detected in the follow‐
ing  call to malloc(), with the result that an incorrectly sized block of memory
would be allocated:
malloc(nmemb * size)
*/