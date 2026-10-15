## Упражнения раздела 1.1

>[Задание 1.1](exercise_01.cpp)

<img width="593" height="205" alt="image" src="https://github.com/user-attachments/assets/6bf0e8d0-24d4-416d-ac37-c8ff0e69b943" />


>[Задание 1.2](exercise_02.cpp)

<img width="588" height="243" alt="image" src="https://github.com/user-attachments/assets/ce8f95c9-8e1c-4f77-8197-f21304f7f882" />


## Использование библиотеки ввода-вывода
``` c++
#include <iostream>

int main() 
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
	return 0;
}
```

## Упражнения раздела 1.2

>[Задание 1.3](exercise_03.cpp)

>[Задание 1.4](exercise_04.cpp)

>[Задание 1.5](exercise_05.cpp)

>[Задание 1.6](exercise_06.cpp)

**Объясните, является ли следующий фрагмент программы допустимым?**
``` c++
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```
**Код некорректен потому что в первой строке в самом конце стоит точка с запятой `;`, она завершает инструкцию вывода, а следующие строки начинаются сразу с оператора `<<`.**

## Упражнения раздела 1.3
>[Задание 1.7](exercise_07.cpp)
``` c++
/*
 * парный комментарий /* */ не допускает вложения
 * под "не допускает вложения" следует понимать, что остальная часть
 * текста будет рассматриваться как программный код
 */
int main()
{
    return 0;
}
```
**Список ошибок скомпилированной программы:**

<img width="731" height="194" alt="exercise_7" src="https://github.com/user-attachments/assets/c0f9a9cc-e5a2-4023-8525-a36c4c4cc247" />

**В C++ парные комментарии `/* ... */` не могут быть вложенными. Компилятор ищет первую попавшуюся закрывающую последовательность `*/`.**


>[Задание 1.8](exercise_08.cpp)

**Какой из следующих операторов вывода (если есть) является допустимым:**
``` c++
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```
**Корректными являются первая, вторая и четвертая строки. Третья строка содержит ошибку компиляции.**

## Использование оператора while
``` c++
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    // продолжать выполнение цикла, пока значение val
    // не превысит 10
    while (val <= 10) {
        sum += val; // присвоить sum сумму val и sum
        ++val;      // добавить 1 к val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
```
## Упражнения раздела 1.4.1
>[Задание 1.9](exercise_09.cpp)

>[Задание 1.10](exercise_10.cpp)

>[Задание 1.11](exercise_11.cpp)

## Использование оператора for
``` c++
#include <iostream>
int main()
{
    int sum = 0;
    // сложить числа от 1 до 10 включительно
    for (int val = 1; val <= 10; ++val)
        sum += val; // эквивалентно sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
```
## Упражнения раздела 1.4.2
>[Задание 1.12](exercise_12.cpp)  
Данный цикл `for` выполняет сложение от -100 до 100, в результате которого значение переменной `sum = 0`

>[Задание 1.13_1](exercise_13_1.cpp) <br> [Задание 1.13_2](exercise_13_2.cpp) <br> [Задание 1.13_3](exercise_13_3.cpp)

>[Задание 1.14]<br>
>Используйте `for`, rогда известно точное число итераций.<br>
>Используйте `while` когда цикл должен выполняться до тех пор, пока истинно определенное условие.

>[Задание 1.15]<br>

**1. Синтаксические ошибки:**
``` c++
#include <iostream>

// Ошибка 1: отсутствует ')' в списке параметров main
int main( {
    
    // Ошибка 2: отсутствуют кавычки вокруг строкового литерала
    std::cout << Update master. << std::endl;
    
    // Ошибка 3: отсутствует второй оператор вывода '<<' перед std::endl
    std::cout << "Write new master." std::endl;
    
    // Ошибка 4: вместо точки с запятой используется двоеточие
    std::cout << "Read each file." << std::endl:
    
    // Ошибка 5: отсутствует ';' после return 0
    return 0
}
```

**2. Ошибки объявления:**
``` c++
#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    
    // Ошибка 1: используется "v" вместо объявленной "v1"
    std::cin >> v >> v2; 
    
    // Ошибка 2: cout не определен, пропущено пространство имен "std::"
    cout << v1 + v2 << std::endl;
    
    return 0;
}
```

**3. Ошибки несовпадения типов:**
``` c++
#include <iostream>

int main() {
// Ошибка: попытка присвоить строковый литерал ("привет") переменной типа int
    int number = "привет";
    
    return 0;
}
```

## Ввод неизвестного количества данных

``` c++
#include <iostream>
int main() {
	int sum = 0, value = 0;
	// читать данные до конца файла, вычислить сумму всех значений
	while (std::cin >> value)
		sum += value; // эквивалентно sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
```

## Упражнение раздела 1.4.3
>[Задание 1.16](exercise_16.cpp)

## Оператор if:

``` c++
#include <iostream>
int main()
{
    // currVal - подсчитываемое число; новые значений будем читать в val
    int currVal = 0, val = 0;
    // прочитать первое число и удостовериться в наличии данных
    // для обработки
    if (std::cin >> currVal) {
        int cnt = 1; // сохранить счет для текущего значения
        while (std::cin >> val) { // читать остальные числа
            if (val == currVal)   // если значение то же
                ++cnt;            // добавить 1 к cnt
            else {                // в противном случае вывести счет для
                                  // предыдущего значения
                std::cout << currVal << " occurs " 
                          << cnt << " times " << std::endl;
                currVal = val;    // запомнить новое значение
                cnt = 1;          // сбросить счетчик
            }
        } // цикл while заканчивается здесь
        // не забыть вывести счет для последнего значения
        std::cout << currVal << " occurs " 
                  << cnt << " times " << std::endl;
    } // первый оператор if заканчивается здесь
    return 0;
}
```

## Упражнения раздела 1.4.4

>[Задание 1.17]  
>Если все входные значения равны, на выходе будет только одна строка.  
>Если повторяющихся значений нет, количество строк выходных данных будет равно количеству входных значений.

>[Задание 1.18](exercise_18.cpp)

>[Задание 1.19](exercise_19.cpp)

## Чтение и запись объектов класса Sales_items

``` c++
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    // прочитать ISBN, количество проданных экземпляров и цену 
    std::cin >> book;
    // вывести ISBN, количество проданных экземпляров,
    // общую сумму и среднюю цену
    std::cout << book << std::endl;
    return 0;
}
```
>0-201-70353-X 4 24.99

## Суммирование объектов класса Sales_items

``` c++
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;              // прочитать две транзакции
    std::cout << item1 + item2 << std::endl; // отобразить их сумму
    return 0;
}
```
>0-201-78345-X 3 20.00  
0-201-78345-X 2 25.00

## Упражнения раздела 1.5.1

>[Задание 1.20](exercise_20.cpp)  
>[Sales_item.h](sales_item.h)  
>[Version_test.h](version_test.h)

>[Задание 1.21](exercise_21.cpp)

>[Задание 1.22](exercise_22.cpp)

## Первый взгляд на функции-члены

``` c++
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1, item2;
    // сначала проверить, представляют ли объекты item1 и item2
    // одну и ту же книгу
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}
```
