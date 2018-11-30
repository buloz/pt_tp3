#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_arg(int argc, char *argv[], int pos)
{
    if (argc < 2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[pos]);
}

int main(int argc, char *argv[])
{
    for (int arg_counter = 1; arg_counter < argc; arg_counter++)
    {
        char *arg = get_arg(argc, argv, arg_counter);
        char rev_str[1000] = {0};
        for (int i = 0; arg[i] != 0; i++)
            rev_str[i] = arg[strlen(arg) - 1 - i];
        printf("%s\n", rev_str);
    }

    return 0;
}