#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
                c = argv[1][i] + 1;
            else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                c = argv[1][i] - 25;
            else
                c = argv[1][i];
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n" ,1);
    return (0);
}