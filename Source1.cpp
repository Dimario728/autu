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

	int arr[maxSize];
	std::cout << "Введите элементы массива:\n";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	selectionSort(arr, n);

	std::cout << "Отсортированный массив:\n";
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}