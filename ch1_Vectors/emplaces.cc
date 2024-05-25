#include <iostream>
#include <string>
#include <vector>

class Person{
    public:
        Person(const std::string &firstName, const std::string &lastName): 
        fullName(firstName + " " + lastName){}
    
    const std::string &getName() const {return fullName;}
    private:
        std::string fullName;
};
int main(){
    std::vector<Person> people;
    people.emplace_back("Jasper", "Bruhl");
    people.emplace(people.begin(), "Kasper", "Bruhl");

    for(const auto& ae: people){
        static int i = 1;
        std::cout << i << "th Person " << ae.getName() << std::endl;
        i++;
    }


    return 0;
}