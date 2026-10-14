#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item obj1, obj2;
    std::cout << "Enter two objects: " << std::endl;
    std::cin >> obj1 >> obj2;
    if (obj1.isbn() == obj2.isbn())
        std::cout << "Sum of objects: " << obj1 + obj2 << std::endl;
    return 0;
}
