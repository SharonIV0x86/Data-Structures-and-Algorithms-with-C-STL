// scenarios where you wish to reset or initialize all vector elements to a specific value.

#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> numbers(5);
    std::fill(numbers.begin(), numbers.end(), 42);


    std::cout << "Vector after filling: ";

    for (const auto &ae : numbers)
        std::cout << ae << " ";

    std::cout << "\n";
}