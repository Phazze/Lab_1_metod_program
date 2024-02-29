#include "MenuTwoDemention.h"
#include "interface.h"

void MenuTwoDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "Введите число, число соответсвует номеру части задания №2 : \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << "Чтобы вернуться в главное меню " << 4 << endl;

		cin >> choise;

		if (choise == '4')
		{
			cout << "Вы уверены, что хотите вернуться в главное меню? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "Возвращаю Вас в главное меню!\n";
				Interface();
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "Возвращаю Вас в меню задания №2." << endl;
			}
			else
			{
				result = true;
				cout << "Не понял вашу команду возвращаю Вас в меню задания №2!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Выполняется 1 часть задания №2\n";
			//ResultOneDemention();
			result = false;
			break;
		case '2':
			cout << "Выполняется 2 часть задания №2\n";
			//ResultTwoDemention();
			result = false;
			break;
		default:
			cout << "Введенное значение не соответствует номеру задания, введите значение еще 1 раз\n";
			break;
		}
	}
}