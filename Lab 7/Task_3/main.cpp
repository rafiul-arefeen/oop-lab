#include <iostream>
#include "CurrencyBDT.h"

int main()
{
    CurrencyBDT mBDT(625.35);
    mBDT.display();
    CurrencyDollar mUSD = CurrencyDollar(mBDT);
    mUSD.display();
    CurrencyEuro mEuro = CurrencyEuro(mBDT);
    mEuro.display();
    
    return 0;
}