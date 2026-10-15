#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item obj, temp;
    if (std::cin >> obj) {
        while (std::cin >> temp) {
            obj += temp;
        }
        std::cout << obj << std::endl;
    }
    return 0;
}
