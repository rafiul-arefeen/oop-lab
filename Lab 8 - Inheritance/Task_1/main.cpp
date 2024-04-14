#include <iostream>
#include "types.h"
#include "mds.h"

int main()
{
    TwoYearMDS mds1("Arefeen", 17500.14, 2000.0, 0.7);
    cout << mds1.getAccName() << endl;
    cout << mds1.getAccNo() << endl;
    cout << mds1.getBalance() << endl;
    cout << mds1.getDepAmount() << endl;
    cout << mds1.getInterestRate() << endl;

    TwoYearMDS mds2("Ruhan", 25000.14, 500.0, 0.5);
    cout << mds2.getAccName() << endl;
    cout << mds2.getAccNo() << endl;
    cout << mds2.getBalance() << endl;
    cout << mds2.getDepAmount() << endl;
    cout << mds2.getInterestRate() << endl;

    return 0;
}