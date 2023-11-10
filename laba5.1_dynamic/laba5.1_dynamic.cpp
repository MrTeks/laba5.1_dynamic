#include <iostream>

using namespace std;

// Вариант 8
int main() {
	setlocale(LC_ALL, "ru");
	int N;
	int i = 0;
	cout << "Введите кол-во элементов:";
	cin >> N;
	if (N > 10) {
		cout << "Число больше 10" << endl;
		return 0;
	}
	cout << "Введите значения:";
	int *a = new int[N];
	while (i < N) {
		i++;
		cin >> a[i];
	}
	cout << "Чётные элементы:";
	for (int d = 0; d < N; d++) {
		if (a[d] % 2 == 0) {
			cout << a[d] << " ";
		}
	}
	cout << endl << "Нечётные элементы:";
	for (int d = N; d > 0; d--) {
		if (a[d] % 2 != 0) {
			cout << a[d] << " ";
		}
	}
	delete[] a;
}	