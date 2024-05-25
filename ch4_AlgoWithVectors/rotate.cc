#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> number{1,2,3,4,5};
                                //rotate as 3 becomes first element
    std::rotate(number.begin(), number.begin() + 2, number.end());
    std::cout << "Rotated vector: ";

    for (const auto &ae : number)
        std::cout << ae << " ";

    std::cout << "\n";
}