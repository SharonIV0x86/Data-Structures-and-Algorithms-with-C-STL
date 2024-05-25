// inputItr + outputItr = forwardItr
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> flist{10, 20, 30, 40, 50};

    std::cout << "Original List: ";
    // for(const auto& ae: flist)
    //     std::cout << ae << " ";
    for (auto it = flist.begin(); it != flist.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    for (auto it = flist.begin(); it != flist.end(); it++)
        (*it)++;

    std::cout << "Modified List: ";
    for (auto it = flist.begin(); it != flist.end(); ++it)
    {
        std::cout << *it << " ";
    }
}