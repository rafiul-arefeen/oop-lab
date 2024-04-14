#include <iostream>
#include "types.h"

int main()
{
    Manager emp1("Adib", "122", true);
    Designer emp2("Arefeen", "114", true);
    Engineer emp3("Tahsin", "106", false);

    cout << emp1.getName() << endl;
    cout << emp1.getMonSalary() << endl;
    cout << emp1.getDutyStat() << endl;

    cout << emp2.getName() << endl;
    cout << emp2.getMonSalary() << endl;
    cout << emp2.getDutyStat() << endl;

    cout << emp3.getName() << endl;
    cout << emp3.getMonSalary() << endl;
    cout << emp3.getDutyStat() << endl;

    return 0;
}