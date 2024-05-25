#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<int> vec1 = {1,2,3,4,5};
    std::vector<int> vec2(vec1);

    std::vector<int> vec3 = {1,2,3,4,5};
    std::vector<int> vec4{vec3};
    
}