#include "MenuTwoDemention.h"
#include "interface.h"

void MenuTwoDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "Enter the number that corresponds to part of task No. 2: \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << "To return to the main menu, press " << 4 << endl;

		cin >> choise;

		if (choise == '4')
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
				cout << "I return you to the task menu No. 2." << endl;
			}
			else
			{
				result = true;
				cout << "I didn’t understand you, I return you to the task menu No. 2!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Part 1 of task No. 2 is being completed\n";
			//ResultOneDemention();
			result = false;
			break;
		case '2':
			cout << "Part 2 of task No. 2 is being completed\n";
			//ResultTwoDemention();
			result = false;
			break;
		default:
			cout << "I didn’t understand you, I return you to the task menu No. 2\n";
			break;
		}
	}
}
