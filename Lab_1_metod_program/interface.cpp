#include "interface.h"


void Interface()
{
	char choise = '0';
	char confirmation = '0';
	bool result = true;
	
	while (result)
	{
		cout << "������� �����, ����� ������������ ������ ������� : \n";
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
		cout << "����� ��������� ��������� ������� " << 0 << endl;

		cin >> choise;

		if (choise == '0')
		{
			cout << "�� �������, ��� ������ ��������� ���������? (Y/N)" << endl;

			cin >> confirmation;

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "�� ��������!\n";
				result = false;
				break;
			}
			if (confirmation == 'N' || confirmation == 'n')
			{
				result = true;
				cout << "��������� ��� � ������� ����." << endl;
			}
			else 
			{
				result = true;
				cout << "�� ����� ���� ������� ��������� ��� � ������� ����!" << endl;
			}
		}

		switch (choise)
		{
		case '1':
			cout << "����������� ������� 1 \n";
			MenuOneDemention();
			result = false;
			break;
		case '2':
			cout << "����������� ������� 2 \n";
			MenuTwoDemention();
			result = false;
			break;
		case '3':
			cout << "����������� ������� 3 \n";
			MenuThreeDemention();
			result = false;
			break;
		default:
			cout << "��������� �������� �� ������������� ������ �������, ������� �������� ��� 1 ���\n";
			break;
		}
	}
}