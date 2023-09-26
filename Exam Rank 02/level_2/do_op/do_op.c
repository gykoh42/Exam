#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int first = 0;
    int third = 0;
    long long answer = 0;
    if (argc == 4)
    {
        first = atoi(argv[1]);
        third = atoi(argv[3]);
        if (argv[2][0] == '+')
            answer = first + third;
        else if (argv[2][0] == '-')
            answer = first - third;
        else if (argv[2][0] == '*')
            answer = first * third;
        else if (argv[2][0] == '/')
            answer = first / third;
        else if (argv[2][0] == '%')
            answer = first % third;
        printf("%lld", answer);
    }
    printf("\n");
}