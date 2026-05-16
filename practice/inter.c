#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    if (argc != 3)
        return (write(1, "\n", 1));

    i = 0;
    while (argv[1][i])
    {
        j = 0;
        while (j < i)
        {
            if (argv[1][j] == argv[1][i])
                break;
            j++;
        }

        if (j == i)
        {
            k = 0;
            while (argv[2][k])
            {
                if (argv[2][k] == argv[1][i])
                {
                    write(1, &argv[1][i], 1);
                    break;
                }
                k++;
            }
        }
        i++;
    }

    write(1, "\n", 1);
    return (0);
}