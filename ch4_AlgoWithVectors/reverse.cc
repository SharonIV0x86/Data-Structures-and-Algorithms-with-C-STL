#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> number{1,2,3,4,5,6,7,8,9};

    std::reverse(number.begin(), number.end());
    std::cout << "Reversed vector: ";

    for(const auto&ae : number)
        std::cout << ae << " ";

    std::cout << "\n";
}