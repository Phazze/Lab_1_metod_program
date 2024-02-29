#include "interface.h"


void Interface()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;
	
	while (result)
	{
		cout << "Введите число, число соответсвует номеру задания : \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
		cout << "Чтобы завершить программу нажмите " << 0 << endl;

		cin >> choise;

		if (choise == '0')
		{
			cout << "Вы уверены, что хотите завершить программу? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "До свидания!\n";
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "Возвращаю Вас в главное меню." << endl;
			}
			else 
			{
				result = true;
				cout << "Не понял вашу команду возвращаю Вас в главное меню!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Выполняется задание 1 \n";
			MenuOneDemention();
			result = false;
			break;
		case '2':
			cout << "Выполняется задание 2 \n";
			MenuTwoDemention();
			result = false;
			break;
		case '3':
			cout << "Выполняется задание 3 \n";
			MenuThreeDemention();
			result = false;
			break;
		default:
			cout << "Введенное значение не соответствует номеру задания, введите значение еще 1 раз\n";
			break;
		}
	}
}