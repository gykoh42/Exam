int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int answer = 0;
    if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
        sign = -1;
    i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        answer = answer * 10 + (str[i] - '0');
        i++;
    }
    return (sign * answer);
}