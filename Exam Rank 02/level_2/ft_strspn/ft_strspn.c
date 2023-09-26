#include <stdlib.h>

int ft_strlen(const char *accept)
{
    int i = 0;
    while (accept[i] != '\0')
        i++;
    return (i);
}

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i] != '\0')
    {
        int j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (j == ft_strlen(accept))
            return (i);
        i++;
    }
    return (0);
}