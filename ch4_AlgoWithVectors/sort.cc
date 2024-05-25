#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
int main(){
    std::vector<int> numbers{5,2,4,6,2,7,3,67,3,};

    auto start = std::chrono::high_resolution_clock::now();
    std::sort(std::begin(numbers), std::end(numbers));
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Time taken in seconds: " << elapsed.count() << " seconds \n ";
    std::cout << "Final vector: ";
    for(const auto& ae: numbers)
        std::cout << ae << " ";
    
    std::cout << "\nSorting in descending order: ";
    std::sort(std::begin(numbers), std::end(numbers), std::greater<>());
    for(const auto& ae: numbers)
        std::cout << ae << " ";


    std::cout << "\n";
}