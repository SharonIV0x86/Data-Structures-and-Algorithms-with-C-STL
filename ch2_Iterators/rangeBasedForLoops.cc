#include <iostream>
#include <vector>
//Internally, the range-based for loop leverages the begin() and end() functions to navigate
// the container. The loop successively retrieves each item from the container, assigning it to the loop
// variable (num in this case).
int main(){
    std::vector<int> numbers{1,2,3,4,5};

    std::cout << "Before iteration\n";
    for(int num: numbers)
        std::cout << num << " ";
    std::cout << std::endl;

    for(auto &num : numbers)
        num *= 2;

    std::cout << "After modification\n";
    for(int num: numbers)
        std::cout << num << " ";

    std::cout << "\n";
}