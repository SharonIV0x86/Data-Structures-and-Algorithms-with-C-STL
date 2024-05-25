#include <iostream>
#include <vector>

int main(){
	std::vector<int> vectuh = {1,2,3,4,5};

	for(const int val: vectuh){
	std::cout <<val <<" ";
	}
	std::cout << std::endl;
	vectuh.resize(7);

	for(const int val: vectuh){
		std::cout << val << " ";
	}
	std::cout << "\n";
	std::cout << "Size of vector: " << vectuh.size() << std::endl;

	return 0;

}
