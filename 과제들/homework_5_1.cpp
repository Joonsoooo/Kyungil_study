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

		cout << "���������� ���� (0 = �ָ�, 1 = ���ڱ�, 2 = ����)" << endl;

		com = rand() % 3;

		// ġƮ
		cout << com << " �¾�" << endl;

		cin >> my;



		if (my == com)
		{
			cout << "�����ϴ�." << endl;
		}

		else if ((my == 0 && com == 1) || (my == 1 && com == 2) || (my == 2 && com == 0))
		{
			cout << "��ǻ�� �¸�!" << endl;
		}
		else if ((my == 0 && com == 2) || (my == 1 && com == 0) || (my == 2 && com == 1))
		{
			cout << "�÷��̾� �¸�!" << endl;
		}
		i++;
	
	}
	
}