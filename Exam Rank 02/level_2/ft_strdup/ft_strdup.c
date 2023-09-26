#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int i = 0;
    char *answer = 0;
    answer = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!answer)
        return (0);
    while (src[i] != '\0')
    {
        answer[i] = src[i];
        i++;
    }
    answer[i] = '\0';
    return (answer);
}