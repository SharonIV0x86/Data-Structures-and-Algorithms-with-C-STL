#include <iostream>
#include <vector>
#include <algorithm>

struct Student
{
    std::string name;
    int grade;
};
struct SortByGradeThenName
{
    bool operator()(const Student &first, const Student &second) const
    {
        if (first.grade == second.grade)
            return (first.name < second.name);
        return (first.grade > second.grade);
    }
    
};
std::ostream &operator<<(std::ostream &os, const Student &st)
{
    os << "Name: " << st.name << " Grade: " << st.grade << std::endl;
    return os;
}

int main()
{
    std::vector<Student> students;
    students.emplace_back("Jasper", 91);
    students.emplace_back("Kasper", 56);
    students.emplace_back("Hasper", 85);
    students.emplace_back("Masper", 75);
    std::sort(students.begin(), students.end(), SortByGradeThenName());

    for(const auto& ae : students)
        std::cout << ae;
}
