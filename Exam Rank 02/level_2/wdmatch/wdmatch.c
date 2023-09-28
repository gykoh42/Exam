#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int tmp_idx1, tmp_idx2 = 0;
        while (argv[2][tmp_idx2] != '\0')
        {
            if (argv[1][tmp_idx1] == argv[2][tmp_idx2])
                tmp_idx1++;
            tmp_idx2++;
        }
        if (ft_strlen(argv[1]) == tmp_idx1)
        {
            tmp_idx1 = 0;
            while (argv[1][tmp_idx1] != '\0')
            {
                write(1, &argv[1][tmp_idx1], 1);
                tmp_idx1++;
            }
        }
    }
    write(1, "\n", 1);
}