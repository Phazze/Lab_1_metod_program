#include "MenuTwoDemention.h"
#include "interface.h"

void MenuTwoDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "������� �����, ����� ������������ ������ ����� ������� �2 : \n";
		cout << 1 << endl;
		cout << 2 << endl;
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
				cout << "��������� ��� � ���� ������� �2." << endl;
			}
			else
			{
				result = true;
				cout << "�� ����� ���� ������� ��������� ��� � ���� ������� �2!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "����������� 1 ����� ������� �2\n";
			//ResultOneDemention();
			result = false;
			break;
		case '2':
			cout << "����������� 2 ����� ������� �2\n";
			//ResultTwoDemention();
			result = false;
			break;
		default:
			cout << "��������� �������� �� ������������� ������ �������, ������� �������� ��� 1 ���\n";
			break;
		}
	}
}