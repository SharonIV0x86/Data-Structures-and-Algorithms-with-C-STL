#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<int> vec(10, 5);
    for(const auto& ae : vec){
        std::cout << ae << std::endl;
    }

    std::vector<int> vecinit = {1,2,3,4,5};
    std::vector<float> floatvec{1.f, 2.f, 3.f, 4.f, 5.f};

    for(size_t i = 0; i < std::min(vecinit.size(), floatvec.size()); i++){
        // std::cout << vecinit[i] << " " << floatvec[i] << std::endl;
    }
    
    std::vector<int> vecv;
    for(int i = 0; i < 10; i++)
        vecv.push_back(i);

    std::cout << "Contents of vecv \n";
    for(const auto& ae: vecv)

        std::cout << ae << " \n";

    std::vector<int> method5(5);
    int value = 0;
    std::generate(method5.begin(), method5.end(), [&value](){return value++;});
}