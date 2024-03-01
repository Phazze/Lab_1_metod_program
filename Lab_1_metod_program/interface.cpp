#include "interface.h"


void Interface()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;
	
	while (result)
	{
		cout << "Enter the number that corresponds to the job number: \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
		cout << "To end the program, press " << 0 << endl;

		cin >> choise;

		if (choise == '0')
		{
			cout << "Are you sure you want to complete the program? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "Goodbye!\n";
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "I return you to the main menu." << endl;
			}
			else 
			{
				result = true;
				cout << "I didn’t understand you, I’m returning you to the main menu!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "Opening the task menu #1 \n";
			MenuOneDemention();
			result = false;
			break;
		case '2':
			cout << "Opening the task menu #2 \n";
			MenuTwoDemention();
			result = false;
			break;
		case '3':
			cout << "Opening the task menu #3 \n";
			MenuThreeDemention();
			result = false;
			break;
		default:
			cout << "I didn’t understand you, I’m returning you to the main menu\n";
			break;
		}
	}
}
