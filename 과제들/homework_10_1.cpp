//빙고 게임
#include <iostream>
#include <time.h>
using namespace std;

int BingoCheck(int Bingo[5][5]);

void main()
{
	int Bingo[5][5];
	int bingo = 0;
	int my;
	int i, l;

	srand(time(NULL));

	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int l = 0; l < 5; l++)
		{
			Bingo[i][l] = count;
			count++;
		}
	}

	for (i = 0; i < 100; i++)
	{
		int x1 = rand() % 5;
		int x2 = rand() % 5;
		int y1 = rand() % 5;
		int y2 = rand() % 5;
		int temp;

		temp = Bingo[x1][y1];
		Bingo[x1][y1] = Bingo[x2][y2];
		Bingo[x2][y2] = temp;
	}

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t l = 0; l < 5; l++)
		{
			cout << Bingo[i][l] << " ";
		}
		cout << endl;
	}


	while (true)
	{
		cin >> my;

		// 숫자 맞추면 -1로
		for (i = 0; i < 5; i++)
		{
			for (l = 0; l < 5; l++)
			{
				if (my == Bingo[i][l])
				{
					Bingo[i][l] = -1;
				}
			}
		}

		// -1을 *로 출력하고, 전체 출력
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t l = 0; l < 5; l++)
			{
				if (Bingo[i][l] == -1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << Bingo[i][l] << " ";
				}
			}
			cout << endl;

		}

		bingo = BingoCheck(Bingo);
		cout << "현재 빙고 수: " << bingo << endl << endl;

		if (bingo == 3)
		{
			cout << "축하합니다! 3빙고를 완성했습니다!" << endl;
			break;
		}
		

	}
}

int BingoCheck(int Bingo[5][5])
{
	int bingo = 0;
	int i, l;

	//가로 빙고
	for (i = 0; i < 5; i++)
	{
		int count = 0;
		for (l = 0; l < 5; l++)
		{
			if (Bingo[i][l] == -1)
			{
				count++;
			}
		}
		if (count == 5)
		{
			bingo++;
		}
	}


	//세로 빙고
	for (i = 0; i < 5; i++)
	{
		int count = 0;
		for (l = 0; l < 5; l++)
		{
			if (Bingo[l][i] == -1)
			{
				count++;
			}
		}
		if (count == 5)
		{
			bingo++;
		}
	}

	//대각선 빙고
	if (Bingo[0][0] == -1 && Bingo[1][1] == -1 && Bingo[2][2] == -1 && Bingo[3][3] == -1 && Bingo[4][4] == -1)
	{
		bingo++;
	}

	if (Bingo[0][4] == -1 && Bingo[1][3] == -1 && Bingo[2][2] == -1 && Bingo[3][1] == -1 && Bingo[4][0] == -1)
	{
		bingo++;
	}

	return bingo;
}
