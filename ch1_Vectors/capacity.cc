#include <iostream>
#include <vector>
int main()
{
    std::vector<int> numbers;
    std::cout << "Initial size: " << numbers.size() << "\n";
    std::cout << "Initial capacity: " << numbers.capacity()
              << "\n";
    for (auto i = 1; i <= 10; ++i)
    {
        numbers.push_back(i);
    }
    std::cout << "Size after adding 10 elements: "
              << numbers.size() << "\n";
    std::cout << "Capacity after adding 10 elements: "
              << numbers.capacity() << "\n";
    for (auto i = 11; i <= 20; ++i)
    {
        numbers.push_back(i);
    }
    std::cout << "Size after adding 20 elements: "
              << numbers.size() << "\n";
    std::cout << "Capacity after adding 20 elements: "
              << numbers.capacity() << "\n";
    for (auto i = 0; i < 5; ++i)
    {
        numbers.pop_back();
    }
    std::cout << "Size after removing 5 elements: "
              << numbers.size() << "\n";
    std::cout << "Capacity after removing 5 elements: "
              << numbers.capacity() << "\n";
    return 0;
}

/*OUTPUT
    Initial size: 0
    Initial capacity: 0
    Size after adding 10 elements: 10
    Capacity after adding 10 elements: 16
    Size after adding 20 elements: 20
    Capacity after adding 20 elements: 32
    Size after removing 5 elements: 15
    Capacity after removing 5 elements: 32
*/