#include "MenuThreeDemention.h"
#include "interface.h"

void MenuThreeDemention()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;

	while (result)
	{
		cout << "������� 1, ����� ��������� ������� �3\n";
		cout << "������� 0, ����� ��������� � ������� ����\n";

		cin >> choise;

		if (choise == '0')
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
				cout << "��������� ��� � ���� ������� �3." << endl;
			}
			else
			{
				result = true;
				cout << "�� ����� ���� ������� ��������� ��� � ���� ������� �3!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "����������� ������� �3\n";
			//ResultOneDemention();
			result = false;
			break;
		default:
			cout << "��������� �������� �� ������������� ������ �������, ������� �������� ��� 1 ���\n";
			break;
		}
	}
}