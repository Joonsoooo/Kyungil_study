#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;

void main()
{
	int i = 0;
	int my;
	int com;


	while (i < 5)
	{
		srand(time((NULL)));

		cout << "가위바위보 게임 (0 = 주먹, 1 = 보자기, 2 = 가위)" << endl;

		com = rand() % 3;

		// 치트
		cout << com << " 냈어" << endl;

		cin >> my;



		if (my == com)
		{
			cout << "비겼습니다." << endl;
		}

		else if ((my == 0 && com == 1) || (my == 1 && com == 2) || (my == 2 && com == 0))
		{
			cout << "컴퓨터 승리!" << endl;
		}
		else if ((my == 0 && com == 2) || (my == 1 && com == 0) || (my == 2 && com == 1))
		{
			cout << "플레이어 승리!" << endl;
		}
		i++;
	
	}
	
}