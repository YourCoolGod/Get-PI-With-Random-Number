#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    srand(time(NULL));

    const double MAX_DOT = 10000000;

    int dotinside = 0;

    for (int i = 0; i < MAX_DOT; ++i)
    {
        if (sqrt(pow(rand(), 2) + pow(rand(), 2)) <= RAND_MAX)
            dotinside++;
    }

    std::cout << "dot inside : " << dotinside << std::endl;

    std::cout << "PI = " << 4.0 / ((MAX_DOT - dotinside) / dotinside + 1) << std::endl;

    return 0;
}
