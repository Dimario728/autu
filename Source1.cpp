#include <iostream>


int main() {
	setlocale(LC_ALL, "rus");
	const int maxSize = 100; // Максимальный размер массива
	int n;
	std::cout << "Введите размер массива (не более " << maxSize << "): ";
	std::cin >> n;
	if (n > maxSize || n <= 0) {
		std::cout << "Ошибка: неверный размер массива\n";
		return 1;
	}


	return 0;
}