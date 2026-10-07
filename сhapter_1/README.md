## Упражнения раздела 1.1

>[Задание 1.1](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_1.cpp)

<img width="593" height="205" alt="image" src="https://github.com/user-attachments/assets/6bf0e8d0-24d4-416d-ac37-c8ff0e69b943" />


>[Задание 1.2](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_2.cpp)

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

>[Задание 1.3](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_3.cpp)

>[Задание 1.4](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_4.cpp)

>[Задание 1.5](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_5.cpp)

>[Задание 1.6](https://github.com/Garo27/C-_Primer_5th_edition/blob/main/%D1%81hapter_1/exercise_6.cpp)

**Объясните, является ли следующий фрагмент программы допустимым?**
``` c++
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```
**Код некорректен потому что в первой строке в самом конце стоит точка с запятой `;`, она завершает инструкцию вывода, а следующие строки начинаются сразу с оператора `<<`.**

## Упражнения раздела 1.3
>[Задание 1.7]
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
<img width="731" height="194" alt="exercise_7" src="https://github.com/user-attachments/assets/c0f9a9cc-e5a2-4023-8525-a36c4c4cc247" />

**В C++ парные комментарии `/* ... */` не могут быть вложенными. Компилятор ищет первую попавшуюся закрывающую последовательность `*/`.**



