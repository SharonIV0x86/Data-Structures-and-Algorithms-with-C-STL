#include <algorithm>
#include <iostream>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    //lambdas cannot modify values out of capture scope if mutable is not mentioned
    std::generate_n(std::back_inserter(numbers), 10, [n = 0]() mutable
                    { return ++n; });

    std::cout << "Value of vector: \n";
    for (const auto &ae : numbers)
        std::cout << ae << " ";
}