// example that demonstrates manually resizing the capacity of a std::vector instance:
#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers{1,2,3,4,5};

    auto printVectorDetails = [&](){
        std::cout << "Vector elements: ";
        for(auto num: numbers){
            std::cout << num << " ";
        }
        std::cout << "\nSize: " << numbers.size() << "\n";
        std::cout << "Capacity: " << numbers.capacity() << "\n";
    };
    std::cout << "Capacity: " << numbers.capacity() << "\n";

    std::cout << "Initial Vector: ";
    printVectorDetails();

    numbers.resize(8);
    std::cout << "After resizing to 8 elements: \n";
    printVectorDetails();

    numbers.resize(3);
    std::cout << "After resizing to 3 elements: \n";
    printVectorDetails();

    std::cout << "Reducing size doesnt affter the capacity: \n";
    std::cout << "Capacity after resize: " << numbers.capacity() << "\n";

    return 0;
}