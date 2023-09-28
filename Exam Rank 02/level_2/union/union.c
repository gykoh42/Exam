#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int char_cnt[127] = {0, };
        int i = 0;
        while (argv[1][i] != '\0')
        {
            if (char_cnt[argv[1][i]] == 0)
            {
                char_cnt[argv[1][i]] = 1;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        i = 0;
        while (argv[2][i] != '\0')
        {
            if (char_cnt[argv[2][i]] == 0)
            {
                char_cnt[argv[2][i]] = 1;
                write(1, &argv[2][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}