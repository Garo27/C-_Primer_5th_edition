#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total; // переменная для хранения данных следующей транзакции
	// прочитать первую транзакцию и удостовериться в наличии данных
	// для обработки
	if (std::cin >> total) {
		Sales_item trans; // переменная для хранения текущей транзакции
		// читать и обработать остальные транзакции
		while (std::cin >> trans) {
			// если все ще обрабатывается та же книга
			if (total.isbn() == trans.isbn())
				total += trans; // пополнение ткуцщей суммы
			else {
				// отобразить результаты по предыдущей книге
				std::cout << total << std::endl;
				total = trans; // теперь total отсносится к следующей
							   // книге
			}
		}
		std::cout << total << std::endl;
	}
	else {
		// нет воода! Предупредить пользователя
		std::cerr << "No data?!" << std::endl;
		return -1; // свидетельство отказа
	}
	return 0;
}
