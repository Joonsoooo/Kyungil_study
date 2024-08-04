//클래스 빙고

#include <iostream>
#include <time.h>
using namespace std;


class Bingo
{
private:
	int bingo[5][5];
	int i, l;

public:
	void ResetBingo(); //빙고판 초기화
	void Shuffle(); // 빙고판 섞기
	void InPutBingo(int my); // 빙고 입력
	void OutPutBingo(); //빙고판 출력
	int CheckBingo(); // 빙고 확인
};

int main()
{
	srand(time(NULL));

	Bingo b;
	int my;

	b.ResetBingo();
	b.Shuffle();

	while (true)
	{
		b.OutPutBingo();
		cin >> my;
		b.InPutBingo(my);
		if (b.CheckBingo() >= 3)
		{
			break;
		}
		cout << "==============" << endl << endl;

		
		

	}
}

void Bingo::ResetBingo()
{
	int count = 1;
	for (i = 0; i < 5; i++)
	{
		for (l = 0; l < 5; l++)
		{
			bingo[i][l] = count;
			count++;
		}
	}
}

void Bingo::Shuffle()
{
	for (i = 0; i < 100; i++)
	{
		int x1, x2, y1, y2;
		x1 = rand() % 5;
		x2 = rand() % 5;
		y1 = rand() % 5;
		y2 = rand() % 5;

		int temp = bingo[x1][y1];
		bingo[x1][y1] = bingo[x2][y2];
		bingo[x2][y2] = temp;
	}
}

void Bingo::InPutBingo(int my)
{
	for (i = 0; i < 5; i++)
	{
		for (l = 0; l < 5; l++)
		{
			if (my == bingo[i][l])
			{
				bingo[i][l] = -1;
			}
		}
	}
}

void Bingo::OutPutBingo()
{
	for (i = 0; i < 5; i++)
	{
		for (l = 0; l < 5; l++)
		{
			if (bingo[i][l] == -1)
			{
				cout << "* ";
			}
			else
			{
				cout << bingo[i][l] << " ";
			}
		}
		cout << endl;
	}
}

int Bingo::CheckBingo()
{
	int bingoCount = 0;

	//가로 빙고
	for (i = 0; i < 5; i++)
	{
		int count = 0;
		for (l = 0; l < 5; l++)
		{
			if (bingo[i][l] == -1)
			{
				count++;
			}
		}
		if (count == 5)
		{
			bingoCount++;
		}
	}


	//세로 빙고
	for (i = 0; i < 5; i++)
	{
		int count = 0;
		for (l = 0; l < 5; l++)
		{
			if (bingo[l][i] == -1)
			{
				count++;
			}
		}
		if (count == 5)
		{
			bingoCount++;
		}
	}

	//대각선 빙고
	if (bingo[0][0] == -1 && bingo[1][1] == -1 && bingo[2][2] == -1 && bingo[3][3] == -1 && bingo[4][4] == -1)
	{
		bingoCount++;
	}

	if (bingo[0][4] == -1 && bingo[1][3] == -1 && bingo[2][2] == -1 && bingo[3][1] == -1 && bingo[4][0] == -1)
	{
		bingoCount++;
	}

	cout << "빙고 수 : " << bingoCount << endl;

	return bingoCount;
}

