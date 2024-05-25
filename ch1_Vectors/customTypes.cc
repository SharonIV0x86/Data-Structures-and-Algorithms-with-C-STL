#include <iostream>
#include <string>
#include <vector>

class Person{
    public:
    Person() = default;
    Person(std::string_view n, int a) : name(n), age(a){}
    void display()const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
    private:
    std::string name;
    int age{0};
};

int main(){
    std::vector<Person> people;
    people.push_back(Person("Jasper", 30));
    people.push_back(Person("Kasper", 40));
    people.resize(3);
    people[2] = Person("Dasper", 19);

    for(const auto& currentPerson: people)
        currentPerson.display();

    return 0;
}