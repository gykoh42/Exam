#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int tmp_idx1, tmp_idx2 = 0;
        int cnt = 0;
        while (argv[1][tmp_idx1] != '\0')
        {
            while (argv[2][tmp_idx2] != '\0')
            {
                if (argv[1][tmp_idx1] == argv[2][tmp_idx2])
                {
                    for (int i = 0; i < tmp_idx1; i++)
                    {
                        if (argv[1][i] == argv[1][tmp_idx1])
                            cnt++;
                    }
                    if (cnt == 0)
                    {
                        write(1, &argv[1][tmp_idx1], 1);
                        break;
                    }
                    cnt = 0;
                }
                tmp_idx2++;
            }
            tmp_idx2 = 0;
            tmp_idx1++;
        }
    }
    write(1, "\n", 1);
}