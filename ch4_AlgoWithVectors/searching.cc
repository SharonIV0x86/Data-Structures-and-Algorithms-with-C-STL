#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> numbers{1,4,2,3,4,5,2,3,4,23,4,32,34,23,5};

    auto it = std::find(numbers.begin(), numbers.end(), 34);
    if(it != numbers.end())
        std::cout<< "Number found at: " << *it << " at index " <<std::distance(numbers.begin(), it);
    else
        std::cout << "Number not found! " << std::endl;
}
