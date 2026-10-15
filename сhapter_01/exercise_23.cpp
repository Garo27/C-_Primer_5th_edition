#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currObj, Obj;
    if (std::cin >> currObj) {
        int cnt = 1;
        while (std::cin >> Obj) {
            if (currObj.isbn() == Obj.isbn())
                ++cnt;
            else {
                std::cout << currObj.isbn() << " occurs " << cnt << " times" << std::endl;
                currObj = Obj;
                cnt = 1;
            }
        }
        std::cout << currObj.isbn() << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
