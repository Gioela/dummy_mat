#include <stdio.h>
#include <stdlib.h>

#define stampa(n) printf(n)


int total_sum(int iter, char **nums)
{
    int sum = 0;

    for (size_t i = 1; i < iter; i++)
    {
        sum = sum + ((int) *nums[i]);
    }
    return sum;
}

int square_area(const int l)
{
    return l * l;
}

int square_perimeter(const int l)
{
    return l * 4;
}

int rectangular_area(const int b, const int h)
{
    return b * h;
}

int rectangular_perimeter(const int b, const int h)
{
    return (b + h) * 2;
}

int main(int argc, char **argv)
{
    // int lato = (int *) argv[2];

    // char q = (char) square_area( lato);
    stampa("Area quadrato: \n");
    // print(q);
    
    // q = (char)square_perimeter( lato);
    printf("Perimetro quadrato: %d\n", 34);
    // printf(q);

    puts("SOMMA TOTALE:");
    // int v = total_sum(argc, **argv);
    
    const int tt = argc -1;

    int *numbers;
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
        if (i > 0)
        {
            // printf("\tnumbers %d: %s\n", i-1, argv[i]);
            // numbers[i-1] = &argv[i];
            printf("\tCASTED numbers %d: %d\n", i, (int) argv[i]);
            // numbers[i-1] = (int) *argv[i];
        }
    }

    // puts(numbers);


    return 0;
}