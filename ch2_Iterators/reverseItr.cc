#include <iostream>
#include <vector>

int main() {
    std::vector<char> characters = {'h', 'e', 'l', 'l', 'o'};

    auto it = characters.rbegin();
    auto end = characters.rend();

    while (it != end) {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << std::endl; // Print a newline

    return 0;
}
