#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    len = strlen(s1);
    dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;
    strcpy(dup, s1);
    return dup;
}