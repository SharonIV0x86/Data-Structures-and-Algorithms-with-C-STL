#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> x{1,2,3,4,5};

    int event =std::count_if(x.begin(), x.end(), [](int n){
        return n % 2 == 0;
    });

    std::cout << "Value of count : " << event << " \n";
}

