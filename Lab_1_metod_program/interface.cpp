#include "interface.h"

void Interface()
{
	int x = 0;

	cout << "Введите число, число соответсвует номеру задания : \n";
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	cin >> x;

	switch (x)
	{
	case 1:
		cout << "Выполняется задание 1 \n";
		//zadanie_1 func
		break;
	case 2:
		cout << "Выполняется задание 2 \n";
		//zadanie_2 func
		break;
	case 3:
		cout << "Выполняется задание 3 \n";
		//zadanie_3 func
		break;
	default:
		cout << "Введенное значение не соответствует номеру задания\n";
		break;
	}
}
