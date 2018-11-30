#include <stdio.h>
#include <stdlib.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Wrong argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);

    int num_to_print = atoi(arg);
    char bin_val[6] = "000000";

    for (int i = 0; arg[i] != 0; i++)
    {
        if (arg[i] < 0x30 || arg[i] > 0x39)
            num_to_print = -1;
    }

    if (num_to_print != -1)
    {
        for (int i = 0; i < 6; i++)
        {
            if ((num_to_print >> i) & 0x1)
                bin_val[5 - i] = '1';
        }
        printf("%s\n", bin_val);
    }
    else
        printf("%d\n", num_to_print);

    return 0;
}