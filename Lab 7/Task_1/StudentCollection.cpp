#include "StudentCollection.h"

StudentCollection::StudentCollection() : noStu(0) {}

StudentCollection::~StudentCollection() {}

int StudentCollection::search(std::string str)
{
    for (int i = 0; i < noStu; i++)
    {
        if (info[i].name == str)
            return i;
    }

    return -1;
}

double StudentCollection::operator[](std::string& str)
{
    int flag;
    int idx = search(str);
    std::cout << "[1] View grade" << std::endl << "[2] Update grade" << std::endl;
    std::cin >> flag;
    if(flag == 1)
    {
        return info[idx].grade;
    }
    else
    {
        std::cout << "Enter new grade: ";
        std::cin >> info[idx].grade;
        return info[idx].grade;
    }
}

void StudentCollection::addStudent(std::string str, double gr)
{
    if(noStu > 9)
        std::cout << "Collection already full." << std::endl;
    else
    {
        info[noStu].name =  str;
        info[noStu].grade = gr;
        noStu++;
        std::cout << "Info added!" << std::endl;
    }
}