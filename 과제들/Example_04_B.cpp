#include <iostream>
#include <time.h>
#include <Windows.h>
// Sleep(1000) / ms ����, 1000 = 1��


using std::cin;
using std::cout;
using std::endl;

void main() 
{
	// 5

	srand(time(NULL));

	int comNumber;
	int myNumber;

	comNumber = rand() % 100 + 1; //1~100
	//cout << "ġƮ: " << comNumber << endl;

	//���� �ݺ�
	while (true)
	{
		cout << "���ٿ� ����: ���ڸ� �Է��Ͻÿ� �ִ� (100)" << endl;
		cin >> myNumber;
		Sleep(1000);

		if (myNumber == comNumber)
		{
			cout << "ã�Ҵ�." << endl;
			Sleep(3000);
			system("cls");
			//break;
		}

		else if (myNumber > comNumber)
		{
			cout << "�ٿ�" << endl;
		}

		else
		{
			cout << "��" << endl;
		}

		cout << endl;
	}
}