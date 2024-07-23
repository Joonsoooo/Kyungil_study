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
		
		cout << Computer << "냈어" << endl;
		cin >> Player;

		switch (Player)
		{
		case 1:
			cout << "주먹을 낸 당신" << endl;
			if (Computer == 3)
			{
				cout << "승리하셨습니다!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "딴 금액: " << Betting << " " << "현재 금액 : " << money << endl;
				EndLine();
				
			}
			else if (Computer == 1)
			{
				cout << "비겼습니다." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "딴 금액: " << Betting << " " << "현재 금액 : " << money << endl;
				EndLine();
				
			}
			else if (Computer == 2)
			{
				cout << "졌습니다..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "잃은 금액 : " << Betting << " " << "현재 금액: " << money << endl;
				EndLine();

			}
			break;
		case 2:
			cout << "보자기를 낸 당신" << endl;
			if (Computer == 1)
			{
				cout << "승리하셨습니다!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "딴 금액: " << Betting << " " << "현재 금액 : " << money << endl;
				EndLine();

			}
			else if (Computer == 2)
			{
				cout << "비겼습니다." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "딴 금액: " << Betting << " " << "현재 금액 : " << money << endl;
				EndLine();
			}
			else if (Computer == 3)
			{
				cout << "졌습니다..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "잃은 금액 : " << Betting << " " << "현재 금액: " << money << endl;
				EndLine();
			}
			break;
		case 3:
			cout << "가위를 낸 당신" << endl;
			if (Computer == 2)
			{
				cout << "승리하셨습니다!" << endl;
				money += Betting * 3;
				Betting = Betting * 3;
				cout << "딴 금액: " << Betting << " "  << "현재 금액 : " << money << endl;
				EndLine();

			}
			else if (Computer == 3)
			{
				cout << "비겼습니다." << endl;
				money += Betting * 5;
				Betting = Betting * 5;
				cout << "딴 금액: " << Betting << " " << "현재 금액 : " << money << endl;
				EndLine();
			}
			else if (Computer == 1)
			{
				cout << "졌습니다..." << endl;
				money -= Betting * 7;
				Betting = Betting * 7;
				cout << "잃은 금액 : " << Betting << " " << "현재 금액: " << money << endl;
				EndLine();
			}
			break;
		default:
			cout << "다시 내자?" << endl;
		}

		if (GameOver(money))
		{
			return 0;
		}
		

		i += 1;

	}
	GameEnd();
	cout << "최종 금액 : " << money  << " 고생하셨습니다.";

}

void GameTitle()
{
	cout << "배팅을 도입한 가위바위보 게임!" << endl;
}

void GameStart()
{
	cout << "무엇을 내겠습니까? 배팅 금액: 1000원 (1 = 바위, 2 = 보자기, 3 = 가위)" << endl;
}

int Bet(int Betting)
{
	int DoOrNot;
	int Bet;

	cout << "배팅하겠습니까? (1: 한다, 2: 안한다)" << endl;
	cin >> DoOrNot;

	if (DoOrNot == 1)
	{
		cout << "얼마나 올리겠습니까?(1: 2배, 2: 1.5배)" << endl;
		cin >> Bet;
		if (Bet == 1)
		{
			cout << "현재 판돈에 2배 올렸습니다. (현재 판돈: " << Betting * 2 << ")" << endl;
			return Betting * 2;
		}
		else if (Bet == 2)
		{
			cout << "현재 판돈에 1.5배 올렸습니다. (현재 판돈: " << Betting * 1.5 << ")" << endl;
			return Betting * 1.5;
		}
	}
	else if (DoOrNot == 2)
	{
		cout << "현재 판돈으로 가겠습니다 (현재 판돈: " << Betting << ")" << endl;
		return Betting;
	}

}

int GameOver(int money)
{
	if (money <= 0)
	{
		cout << "자금이 부족합니다." << endl;
		return 1;
	}
	return 0;
}

void GameEnd()
{
	cout << "게임 종료" << endl;
}

void EndLine()
{
	cout << "___________________________________________" << endl;
}
