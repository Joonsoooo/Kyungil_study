#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void GameTitle();
void GameStart();
int Bet(int Betting);
int GameOver(int money);
void GameEnd();
void EndLine();



int main()
{
	int money = 10000;
	int Player;
	int Computer;
	int i = 0;
	srand(time(NULL));

	GameTitle();

	while (i < 5)
	{
		int Betting = 1000;
		Computer = rand() % 3 + 1;

		Betting = Bet(Betting);
		money -= 1000;

		GameStart();
		
		cout << Computer << "�¾�" << endl;
		cin >> Player;

		switch (Player)
		{
		case 1:
			cout << "�ָ��� �� ���" << endl;
			if (Computer == 3)
			{
				cout << "�¸��ϼ̽��ϴ�!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "�� �ݾ�: " << Betting << " " << "���� �ݾ� : " << money << endl;
				EndLine();
				
			}
			else if (Computer == 1)
			{
				cout << "�����ϴ�." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "�� �ݾ�: " << Betting << " " << "���� �ݾ� : " << money << endl;
				EndLine();
				
			}
			else if (Computer == 2)
			{
				cout << "�����ϴ�..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "���� �ݾ� : " << Betting << " " << "���� �ݾ�: " << money << endl;
				EndLine();

			}
			break;
		case 2:
			cout << "���ڱ⸦ �� ���" << endl;
			if (Computer == 1)
			{
				cout << "�¸��ϼ̽��ϴ�!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "�� �ݾ�: " << Betting << " " << "���� �ݾ� : " << money << endl;
				EndLine();

			}
			else if (Computer == 2)
			{
				cout << "�����ϴ�." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "�� �ݾ�: " << Betting << " " << "���� �ݾ� : " << money << endl;
				EndLine();
			}
			else if (Computer == 3)
			{
				cout << "�����ϴ�..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "���� �ݾ� : " << Betting << " " << "���� �ݾ�: " << money << endl;
				EndLine();
			}
			break;
		case 3:
			cout << "������ �� ���" << endl;
			if (Computer == 2)
			{
				cout << "�¸��ϼ̽��ϴ�!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "�� �ݾ�: " << Betting << " "  << "���� �ݾ� : " << money << endl;
				EndLine();

			}
			else if (Computer == 3)
			{
				cout << "�����ϴ�." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "�� �ݾ�: " << Betting << " " << "���� �ݾ� : " << money << endl;
				EndLine();
			}
			else if (Computer == 1)
			{
				cout << "�����ϴ�..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "���� �ݾ� : " << Betting << " " << "���� �ݾ�: " << money << endl;
				EndLine();
			}
			break;
		default:
			cout << "�ٽ� ����?" << endl;
		}

		if (GameOver(money))
		{
			return 0;
		}
		

		i += 1;

	}
	GameEnd();
	cout << "���� �ݾ� : " << money  << " ����ϼ̽��ϴ�.";

}

void GameTitle()
{
	cout << "������ ������ ���������� ����!" << endl;
}

void GameStart()
{
	cout << "������ ���ڽ��ϱ�? ���� �ݾ�: 1000�� (1 = ����, 2 = ���ڱ�, 3 = ����)" << endl;
}

int Bet(int Betting)
{
	int DoOrNot;
	int Bet;

	cout << "�����ϰڽ��ϱ�? (1: �Ѵ�, 2: ���Ѵ�)" << endl;
	cin >> DoOrNot;

	if (DoOrNot == 1)
	{
		cout << "�󸶳� �ø��ڽ��ϱ�?(1: 2��, 2: 1.5��)" << endl;
		cin >> Bet;
		if (Bet == 1)
		{
			cout << "���� �ǵ��� 2�� �÷Ƚ��ϴ�. (���� �ǵ�: " << Betting * 2 << ")" << endl;
			return Betting * 2;
		}
		else if (Bet == 2)
		{
			cout << "���� �ǵ��� 1.5�� �÷Ƚ��ϴ�. (���� �ǵ�: " << Betting * 1.5 << ")" << endl;
			return Betting * 1.5;
		}
	}
	else if (DoOrNot == 2)
	{
		cout << "���� �ǵ����� ���ڽ��ϴ� (���� �ǵ�: " << Betting << ")" << endl;
		return Betting;
	}

}

int GameOver(int money)
{
	if (money <= 0)
	{
		cout << "�ڱ��� �����մϴ�." << endl;
		return 1;
	}
	return 0;
}

void GameEnd()
{
	cout << "���� ����" << endl;
}

void EndLine()
{
	cout << "___________________________________________" << endl;
}
