int is_power_of_2(unsigned int n)
{
    unsigned int two = 2;
    while (two < n)
        two = two * 2;
    if (n == 1 || two == n)
        return (1);
    return (0);
}