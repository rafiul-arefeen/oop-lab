#include <iostream>
#include "StudentCollection.h"

int main()
{
    StudentCollection stu;
    std::string str;
    double grade;
    stu.addStudent("Ruhan", 4.00);
    stu.addStudent("Adib", 3.90);
    stu.addStudent("Tahsin", 3.95);
    stu.addStudent("Arefeen", 3.85);

    std::cout << "Enter name: ";
    std::cin >> str;
    grade = stu[str];
    std::cout << "Grade: " << grade << std::endl;
    return 0;
}