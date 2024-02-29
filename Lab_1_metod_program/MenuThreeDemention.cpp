#include "MenuThreeDemention.h"
#include "interface.h"

void MenuThreeDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "Введите 1, чтобы выполнить задание №3\n";
		cout << "Введите 0, чтобы вернуться в главное меню\n";

		cin >> choise;

		if (choise == '0')
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
				cout << "Возвращаю Вас в меню задания №3." << endl;
			}
			else
			{
				result = true;
				cout << "Не понял вашу команду возвращаю Вас в меню задания №3!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Выполняется задание №3\n";
			//ResultOneDemention();
			result = false;
			break;
		default:
			cout << "Введенное значение не соответствует номеру задания, введите значение еще 1 раз\n";
			break;
		}
	}
}