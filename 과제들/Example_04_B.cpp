#include <iostream>
#include <time.h>
#include <Windows.h>
// Sleep(1000) / ms 기준, 1000 = 1초


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
	//cout << "치트: " << comNumber << endl;

	//무한 반복
	while (true)
	{
		cout << "업다운 게임: 숫자를 입력하시오 최대 (100)" << endl;
		cin >> myNumber;
		Sleep(1000);

		if (myNumber == comNumber)
		{
			cout << "찾았다." << endl;
			Sleep(3000);
			system("cls");
			//break;
		}

		else if (myNumber > comNumber)
		{
			cout << "다운" << endl;
		}

		else
		{
			cout << "업" << endl;
		}

		cout << endl;
	}
}