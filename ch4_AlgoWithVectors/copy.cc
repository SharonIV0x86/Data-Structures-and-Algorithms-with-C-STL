#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> number{1,2,3,4,5,6,7,8,9};

    std::vector<int> copied(9);
    // copied.reserve(10); work work for some reason.
    std::copy(number.begin(), number.end(), copied.begin());

    std::cout << "Copied Vector contents of copied: ";
    for(const auto&ae : copied)
        std::cout << ae << " ";

    std::cout << "\n";
}