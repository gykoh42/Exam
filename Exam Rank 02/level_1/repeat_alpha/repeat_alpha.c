#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int repeat_num = 0;
    int tmp_idx = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                repeat_num = argv[1][i] - 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                repeat_num = argv[1][i] - 'A';
            else
                repeat_num = 0;
            tmp_idx = 0;
            while (tmp_idx <= repeat_num)
            {    
                write(1, &argv[1][i], 1);
                tmp_idx++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}