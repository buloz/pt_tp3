#include <stdio.h>
#include <stdlib.h>

char *get_arg(int argc, char *argv[], int pos)
{
    if (argc < 3)
    {
        printf("not enough argument\n\n");
        exit(0);
    }
    return (argv[pos]);
}

int main(int argc, char *argv[])
{
    char *arg1 = get_arg(argc, argv, 1);
    char *arg2 = get_arg(argc, argv, 2);

    int val_to_write = atoi(arg1);
    int bit_to_write = atoi(arg2);
    int result;

    result = val_to_write ^ (1 << bit_to_write);

    printf("%d\n", result);

    return 0;
}