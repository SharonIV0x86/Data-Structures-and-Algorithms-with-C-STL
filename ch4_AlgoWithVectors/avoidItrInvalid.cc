#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    numbers.reserve(1000);

    for (int i = 1; i <= 10; i++)
        numbers.push_back(i);

    std::cout << "Initial vector: ";
    for (const auto &ae : numbers)
        std::cout << ae << " ";

    size_t positionOfFive = 4;
    std::cout << "\nFifth element: " << numbers[positionOfFive] << std::endl;

    numbers.insert(numbers.begin() + 5, 99);

    std::cout << "Vector after insertion: ";
    for (const auto &ae : numbers)
        std::cout << ae << " ";

    std::vector<int>::iterator it = numbers.begin() + positionOfFive;
    std::cout << "\nElement at the earlier fifth position after insertion: " << *it << std::endl;

    it = numbers.begin() + 6;

    auto isOdd = [](int num)
    { return num % 2 != 0; };

    auto countOdd = std::count_if(numbers.begin(), numbers.end(), isOdd);

    std::cout << "Number of odd values: " << countOdd << std::endl;

    std::cout << "Final vector: ";
    for (const auto &ae : numbers)
        std::cout << ae << " ";
    std::cout << "\n";
    return 0;
}