int total_sum(int iter, int **nums)
{
    int sum = 0;

    for (size_t i = 1; i < iter; i++)
    {
        sum = sum + *nums[i];
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
