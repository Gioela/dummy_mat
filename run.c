#include <stdio.h>
#include <stdlib.h>

#define stampa printf

static int result;

// int total_sum(const int iter, int **nums);
int dummy_sum(int res, int nums);
int square_area(const int l);
int square_perimeter(const int l);
int rectangular_area(const int b, const int h);
int rectangular_perimeter(const int b, const int h);

int total_sum(int iter, int *nums)
{
    int sum = 0;
    for (size_t i = 0; i < iter; i++)
    {
        sum = sum + nums[i];
    }
    return sum;
}

int main(int argc, char **argv)
{

    int *numbers = malloc(sizeof(int) * (argc - 1));
    for (int i = 0; i < argc; i++)
    {
        // printf("Argument %d: %s\n", i, argv[i]);
        if (i > 0)
        {
            // printf("\tnumbers %d: %s\n", i-1, argv[i]);
            numbers[i-1] = atoi(argv[i]);
        }
    }

    // for (int i = 0; i < argc-1; i++)
    // {
    //     printf("%d\n",numbers[i]);
    // }

    // stampa(">>> TESTO DI PROVA <<<\n");
    // int result = 0;
    // for (int i = 0; i < argc-1; i++)
    // {
    //     printf("%d\n",numbers[i]);
    //     result = total_sum(result, numbers[i]);
    // }
    // int result = total_sum(argc-1, numbers);

    puts("> Simple SUM of input numbers:");
    result = dummy_sum(numbers[0], numbers[1]);
    printf("\tSum 1st two numbers: %d\n", result);
    stampa("\tTOTAL SUM: %d\n", total_sum(argc-1, numbers));

    puts("\n> Geometric SQUARE basic values:");
    stampa("\tArea: %d\n", square_area(numbers[0]));
    stampa("\tPerimeter: %d\n", square_perimeter(numbers[0]));
    
    puts("\n> Geometric RECTANGULAR basic values:");
    stampa("\tArea: %d\n", rectangular_area(numbers[0], numbers[1]));
    stampa("\tPerimeter: %d\n", rectangular_perimeter(numbers[0], numbers[1]));
    

    return 0;
}




int dummy_sum(int res, int nums)
{
    return res + nums;
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