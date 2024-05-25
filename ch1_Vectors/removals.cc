// A classic example removes all instances of 0 from std::vector<int>:
// std::vector<int> numbers = {1, 0, 3, 0, 5};
// auto end = std::remove(numbers.begin(), numbers.end(), 0);
// numbers.erase(end, numbers.end());
//pg 20!!

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
void displayVec(const std::vector<int>& vec){
    for(const auto& ae: vec)
        std::cout << ae << " ";

    std::cout << "\n";
}

int main(){
    std::vector <int> zeroes{1,2,3,4,0,3,4,0,12,67,0,56,9,34,0,0,0,23};

    std::cout << "Vector before removing zeroes: \n";
    displayVec(zeroes);
    std::cout << "Vector after removing zeroes: \n";
    std::erase(zeroes, 0);
    displayVec(zeroes);

    std::vector<int> numbers{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    std::cout << "Vector with all numbers: \n";
    displayVec(numbers);
    std::erase_if(numbers, [](int &x){return x % 2 == 0;});
    std::cout << "Vector with even numbers removed: \n";
    displayVec(numbers);
    
}