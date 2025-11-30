#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    for (i = 0; haystack[i] && i < len; i++)
    {
        for (j = 0; needle[j] && haystack[i + j] == needle[j] && (i + j) < len; j++)
            ;
        if (!needle[j])
            return ((char *)&haystack[i]);
    }
    return (NULL);
}