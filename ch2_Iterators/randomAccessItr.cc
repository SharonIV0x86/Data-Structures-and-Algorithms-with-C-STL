// move forward by multiple steps, retreat backward, or access elements directly without sequential
//  traversal

#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex vecMutex;

void add_to_vector(std::vector<int> &numbers, int value)
{
    std::lock_guard<std::mutex> guard(vecMutex);
    numbers.push_back(value);
}

void print_vector(const std::vector<int> &numbers)
{
    std::lock_guard<std::mutex> guard(vecMutex);
    for (const auto &ae : numbers)
    {
        std::cout << ae << " ";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> numbers;
    std::thread thread1(add_to_vector, std::ref(numbers), 10);
    std::thread thread2(add_to_vector, std::ref(numbers), 20);

    thread1.join();
    thread2.join();
    std::thread thread3(print_vector, std::ref(numbers));
    thread3.join();

    return 0;
}