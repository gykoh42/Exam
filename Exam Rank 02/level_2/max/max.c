int max(int* tab, unsigned int len)
{
    if (len == 0)
        return (0);

    int i = 0;
    int max = 0;
    while (i < len)
    {
        max = tab[i];
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}