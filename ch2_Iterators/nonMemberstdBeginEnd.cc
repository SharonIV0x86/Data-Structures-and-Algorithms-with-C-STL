// std::begin and std::end are non member function that works with all the containers (generic) and underlyingly calls the respective container's begina and end function

#include <array>
#include <iostream>
#include <list>
#include <vector>

template <typename Container>
void displayElement(const Container &cont)
{
    for (auto it = std::begin(cont); it != std::end(cont); it++)
        std::cout << *it << " ";

    std::cout << "\n";
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<int> lst{6, 7, 8, 9, 10};
    std::array<int, 5> arr{11, 12, 13, 14, 15};

    std::cout << "Vector Elements: ";
    // displayElement<std::vector<int>>(vec); also works
    displayElement(vec); //this better

    std::cout << "List elements: ";
    displayElement(lst);

    std::cout << "Array elements: ";
    displayElement(arr);
}