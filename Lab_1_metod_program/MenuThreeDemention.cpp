#include "MenuThreeDemention.h"
#include "interface.h"

void MenuThreeDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "Press 1 to complete task #3\n";
		cout << "Press 0 to return to main menu\n";

		cin >> choise;

		if (choise == '0')
		{
			cout << "Are you sure you want to return to the main menu? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "I return you to the main menu!\n";
				Interface();
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "I return you to the task menu 3." << endl;
			}
			else
			{
				result = true;
				cout << "I didn’t understand your command, I’m returning you to the task menu 3!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Task 3 in progress!\n";
			//ResultOneDemention();
			result = false;
			break;
		default:
			cout << "I didn’t understand your command, I’m returning you to the task menu 3!\n";
			break;
		}
	}
}
