#include <iostream>
#include <cstdlib>
#include <ctime>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
double mean_arr(int arr[], int const length, double value) {
	for (int i = 0; i < length; i++) {
		value += arr[i];
		
	}
	return value / length;
}
int powers(int num1, int num2) {
	int tmp = num1;
	for (int i = 1; i < num2; i++) {
		tmp *= num1;
	}
	return tmp;
}
int pozitive_arr(int arr[], int const length) {
	int tmp = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			tmp = arr[i] * (-1);
			std::cout << tmp << ' ';
		}
		else
			std::cout << arr[i] << ' ';
	}
	return 1;
}


int main() {
	setlocale(LC_ALL, "Ru");
	int n;
	// Task 1
	int m, r;
	std::cout << " Ввеедите два числа -> \n";
	std::cin >> m;
	std::cin >> r;
	std::cout << " Среднее арифмитическое: " << mean(m, r) << "\n\n";

	// Task 2
	int const size = 7;
	int arr[size];
	double cp = 0.0;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11;
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	std::cout << " Среднее значение: " << mean_arr(arr, size, cp) << "\n\n";

	// Task 3
	int w, s;
	std::cout << " Введите 2 числа - > ";
	std::cin >> w;
	std::cin >> s;
	std::cout << "Число " << w << " в степени " << s << " = " << powers(w, s) << "\n\n";

	// Task4
	int const size2 = 10;
	int arr2[size2];
	srand(time(NULL));
	std::cout << " Изначальный массив: \n";
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 21 - 10;
		std::cout << arr2[i] << ' ';
	}
	std::cout << "\n\n";
	std::cout << " Конечный массив: " << pozitive_arr(arr2, size2) << "\n\n";


	return 0;
}