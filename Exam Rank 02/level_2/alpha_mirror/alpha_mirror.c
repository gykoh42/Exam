#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int alpha_idx = 0;
    char *a = "abcdefghijklmnopqustuvwxyz";
    char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                alpha_idx = 25 - (argv[1][i] - 'a');
                write(1, &a[alpha_idx], 1);
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                alpha_idx = 25 - (argv[1][i] - 'A');
                write(1, &A[alpha_idx], 1);
            }
            else 
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}