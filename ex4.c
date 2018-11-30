#include <stdio.h>
#include <stdlib.h>

typedef struct s_complex
{
    double r;
    double i;
} t_complex;

t_complex *c_add(t_complex *op1, t_complex *op2);

int main(int argc, char *argv[])
{
    t_complex z1 = {12, 2};
    t_complex z2 = {50, 18};

    t_complex *ptr_sum = c_add(&z1, &z2);

    printf("Real part : %0.0f, Imaginary part :%0.0f\n", ptr_sum->r, ptr_sum->i);

    return 0;
}

t_complex *c_add(t_complex *op1, t_complex *op2)
{
    t_complex *result = malloc(sizeof(t_complex));
    result->r = op1->r + op2->r;
    result->i = op1->i + op2->i;

    return result;
}