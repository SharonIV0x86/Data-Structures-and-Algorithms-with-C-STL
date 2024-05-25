#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    
    /*
    const auto secondElement = numbers[1];
    std::cout << "The second element is: " << secondElement << std::endl;

    const auto outofBound = numbers[20];
    std::cout << "Accessing an out-of-bounds index: "
              << outofBound << "\n";
            
    //for safety use .at()
    */
    try{
        const auto secondEle = numbers.at(1);
        std::cout << "Second element: " << secondEle << std::endl; 
    }catch(const std::out_of_range& error){
        std::cerr << "Error: " << error.what() << std::endl;
    }
     try{
        const auto outOfBound = numbers.at(10);
        std::cout << "Out of bound element: " << outOfBound << std::endl; 
    }catch(const std::out_of_range& error){
        std::cerr << "Error: " << error.what() << std::endl;
    }
    // std::cout << "Value at 20th index: :) " << numbers.at(20);

    std::cout << "First element is: " << numbers.front() << std::endl;
    std::cout << "Last element is: " << numbers.back() << std::endl;

    const std::vector<int> data{1,2,3,4,5};
    const auto elemCountData = data.size();
    const auto elemCountCapacity = data.capacity();
    std::cout << "Data size: " << elemCountData << " Data capacity: " << elemCountCapacity << std::endl;


    return 0;
}