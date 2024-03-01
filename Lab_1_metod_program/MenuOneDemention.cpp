#include "MenuOneDemention.h"
#include "interface.h"

void MenuOneDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "Enter the number that corresponds to part of task No. 1: \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
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
				cout << " I’m returning you to task menu No. 1." << endl;
			}
			else
			{
				result = true;
				cout << "I didn’t understand you, I’m returning you to task menu No. 1!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Part 1 of task No. 1 is being completed\n";
			//ResultOneDemention();
			result = false;
			break;
		case '2':
			cout << "Part 2 of task No. 1 is being completed\n";
			//ResultTwoDemention();
			result = false;
			break;
		case '3':
			cout << "Part 3 of task No. 1 is being completed\n";
			//ResultThreeDemention();
			result = false;
			break;
		default:
			cout << "I didn’t understand you, I’m returning you to task menu No. 1\n";
			break;
		}
	}
}
