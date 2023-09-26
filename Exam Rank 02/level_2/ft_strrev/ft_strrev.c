int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int str_len = ft_strlen(str);
    char tmp;
    while (i < str_len / 2)
    {
        tmp = str[i];
        str[i] = str[str_len - i - 1];
        str[str_len - i - 1] = tmp;
        i++;
    }
    return (str);
}