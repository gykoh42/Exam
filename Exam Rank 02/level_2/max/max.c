int max(int* tab, unsigned int len)
{
    int i = 0;
    if (len == 0)
        return (0);

    while (i < len)
    {
        int max = tab[i];
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}