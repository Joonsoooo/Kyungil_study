#include <iostream>
#include <Windows.h>
using namespace std;

void TextColor(int font, int backGround);

int main()
{
	cout << "[���� ���]" << endl;
	cout << "=================" << endl << endl;
	cout << "��" << endl;
	cout << "����: 5000��" << endl;
	cout << "Ư��: ������ ���" << endl;
	cout << "-----------------" << endl;

	cout << "�ܰ�" << endl;
	cout << "����: 1500��" << endl;
	cout << "Ư��: ª���� �񸮸� ���" << endl;

	TextColor(0, 0);
	cout << "�������";
	TextColor(8, 8);
	cout << "���";
	TextColor(0, 0);
	cout << "��������" << endl;

	cout << "�������";
	TextColor(8, 8);
	cout << "����";
	TextColor(0, 0);
	cout << "�������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "������";
	TextColor(8, 8);
	cout << "������";
	TextColor(0, 0);
	cout << "������" << endl;

	cout << "���";
	TextColor(6, 6);
	cout << "������������";
	TextColor(0, 0);
	cout << "���" << endl;

	cout << "���";
	TextColor(6, 6);
	cout << "������������";
	TextColor(0, 0);
	cout << "���" << endl;

	cout << "������";
	TextColor(11, 11);
	cout << "�����";
	TextColor(0, 0);
	cout << "�������" << endl;

	cout << "������";
	TextColor(11, 11);
	cout << "�����";
	TextColor(0, 0);
	cout << "�������" << endl;

	cout << "������";
	TextColor(11, 11);
	cout << "�����";
	TextColor(0, 0);
	cout << "�������" << endl;

	cout << "������";
	TextColor(11, 11);
	cout << "�����";
	TextColor(0, 0);
	cout << "�������" << endl;
	cout << "----------------------" << endl;

	TextColor(15, 0);

	cout << "���" << endl;
	cout << "����: 1500��" << endl;
	cout << "Ư��: ������ ������ ��" << endl;
	cout << "-----------------------" << endl;

	cout << "[�� ���]" << endl;
	cout << "=======================" << endl << endl;
	cout << "����" << endl;
	cout << "����: 10000��" << endl;
	cout << "Ư��: ������ �� �� ������" << endl;
	cout << endl;

	TextColor(14, 0);

	cout << "    �������������" << endl;
	cout << "    �������������" << endl;
	cout << "    �������������" << endl;
	cout << "    �������������" << endl;
	cout << "    ����      ����" << endl;
	cout << "    �������������" << endl;
	cout << "      ���������" << endl;
	cout << "       ������� " << endl;

	TextColor(15, 0);
	cout << "---------------------------" << endl;
	cout << "�Ź�" << endl;
	cout << "����: 10000��" << endl;
	cout << "Ư��: �޸��� ����" << endl;
	cout << "----------------------";
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}