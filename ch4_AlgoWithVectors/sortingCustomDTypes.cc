#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Person
{
    std::string name;
    int age{0};

    Person(std::string n, int a) : name(n), age(a) {}

    friend std::ostream &operator<<(std::ostream &os, const Person &p)
    {
        os << p.name << " (" << p.age << ")";
        return os;
    }
};

int main()
{
    std::vector<Person> people;

    people.reserve(3);
    people.emplace_back("Jasper Bruhl", 19);
    people.emplace_back("Kasper Bruhl", 22);
    people.emplace_back("Hasper Bruhl", 29);

    auto compareByName = [](const Person &a, const Person &b)
    {
        return a.name < b.name;
    };

    std::sort(people.begin(), people.end(), compareByName);

    std::cout << "Vector after sorting by name: \n";
    for (const auto &ae : people)
    {
        std::cout << ae << std::endl;
    }

    std::sort(people.begin(), people.end(), [](const Person &a, const Person &b)
              { return a.age < b.age; });

    std::cout << "Vector after sorting by age: \n";
    for (const auto &ae : people)
    {
        std::cout << ae << std::endl;
    }
}