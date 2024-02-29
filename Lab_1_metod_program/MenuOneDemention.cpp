#include "MenuOneDemention.h"
#include "interface.h"

void MenuOneDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "������� �����, ����� ������������ ������ ����� ������� �1 : \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
		cout << "����� ��������� � ������� ���� " << 4 << endl;

		cin >> choise;

		if (choise == '4')
		{
			cout << "�� �������, ��� ������ ��������� � ������� ����? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "��������� ��� � ������� ����!\n";
				Interface();
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "��������� ��� � ���� ������� �1." << endl;
			}
			else
			{
				result = true;
				cout << "�� ����� ���� ������� ��������� ��� � ���� ������� �1!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "����������� 1 ����� ������� �1\n";
			//ResultOneDemention();
			result = false;
			break;
		case '2':
			cout << "����������� 2 ����� ������� �1\n";
			//ResultTwoDemention();
			result = false;
			break;
		case '3':
			cout << "����������� 3 ����� ������� �1\n";
			//ResultThreeDemention();
			result = false;
			break;
		default:
			cout << "��������� �������� �� ������������� ������ �������, ������� �������� ��� 1 ���\n";
			break;
		}
	}
}