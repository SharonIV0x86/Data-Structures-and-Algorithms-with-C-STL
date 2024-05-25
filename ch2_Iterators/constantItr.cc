// move forward by multiple steps, retreat backward, or access elements directly without sequential
//  traversal

#include <iostream>
#include <vector>


int main()
{
    std::vector<int> numbers{1,2,3,4,5};

    for(auto constantIterator = numbers.cbegin(); constantIterator != numbers.cend(); constantIterator++){
        std::cout << *constantIterator << " ";
    }
    std::cout << "\n";
    std::vector<int>::iterator i = numbers.begin();
    std::cout << "Raw value of i: " << *i << std::endl;
    return 0;
}