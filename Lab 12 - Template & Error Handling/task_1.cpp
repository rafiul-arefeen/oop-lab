#include <iostream>
#include <algorithm>

template <class typeA, class typeB>
typeA aMax(typeA* arr, typeB size, typeB n)
{
    std::sort(arr, arr+size);
    return arr[size - n];
}

int main()
{
    int intArr[10] = {43, 12, 87, 56, 29, 5, 72, 93, 41, 68};
    double doubleArr[10] = {58.234, 14.789, 36.543, 91.234, 25.678, 47.890, 73.123, 62.456, 18.345, 84.567};
    long longArr[10] = {7896541230, 1234567890, 4567890123, 9870123456, 3216549870, 8765432109, 2345678901, 1098765432, 5432109876, 6789012345};

    std::cout << "Int array 3rd highest: " << aMax(intArr, 10, 3) << std::endl;
    std::cout << "Double array 4th highest: " << aMax(doubleArr, 10, 4) << std::endl;
    std::cout << "Long array 5th highest: " << aMax(longArr, 10, 5) << std::endl;

    return 0;
}