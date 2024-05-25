#include <iostream>
#include <vector>

int main(){
    std::vector<int> scores;

    std::cout << "Initial size of scores: " << scores.size() << std::endl;
    scores.push_back(96);

    std::cout << "Size after adding one score: " << scores.size() << std::endl;

    std::cout << "Recently added score: " << scores[0] << std::endl;

    

    return 0;
}