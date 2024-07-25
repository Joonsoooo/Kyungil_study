#include <iostream>
#include <time.h>
using namespace std;

int Bet(int Betting);

enum Shape
{
    clover, spade, heart, diamond
};

struct Trump
{
    Shape shape;
    int num;
};

void SelectCard(Trump trump);

int main()
{
    int Money = 10000;

    Trump trump[52];
    int count = 0;

    for (int shape = clover; shape <= diamond; shape++) {
        for (int num = 1; num <= 13; num++) {
            trump[count].shape = static_cast<Shape>(shape);
            trump[count].num = num;
            count++;
        }
    }

    srand(time(NULL));

    for (int i = 0; i < 100; ++i) {
        int r1 = rand() % 52;
        int r2 = rand() % 52;
        Trump temp = trump[r1];
        trump[r1] = trump[r2];
        trump[r2] = temp;
    }

    int cnt = 0;

    for (int i = 1; i <= 17; i++)
    {
        int Betting = 1000;

        if (Money < Betting)
        {
            cout << "소지금이 부족합니다." << endl;
            return 0;
        }

        Betting = Bet(Betting);
        Money -= 1000;

        SelectCard(trump[cnt]);
        cout << "\t";
        SelectCard(trump[cnt+1]);
        cout << "\t";
        SelectCard(trump[cnt+2]);
        cout << endl;

        if ((trump[cnt + 1].num > trump[cnt].num && trump[cnt + 1].num < trump[cnt + 2].num) ||
            (trump[cnt + 1].num < trump[cnt].num && trump[cnt + 1].num > trump[cnt + 2].num)) {
            Money += Betting * 7;
            Betting = Betting * 7;
            cout << "승리!! " << "딴 금액 : " << Betting << " " << "현재 금액: " << Money << endl;
        }
        else {
            Money -= Betting * 3;
            Betting = Betting * 3;
            cout << "패배.. " << "잃은 금액 : " << Betting << " " << "현재 금액: " << Money << endl;
        }
        cout << "========" << i << "번째 게임 종료" << "==========" << endl << endl;

        cnt += 3;
    }

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
            cout << "=======================" << endl;
            return Betting * 2;
        }
        else if (Bet == 2)
        {
            cout << "현재 판돈에 1.5배 올렸습니다. (현재 판돈: " << Betting * 1.5 << ")" << endl;
            cout << "=======================" << endl;
            return Betting * 1.5;
        }
    }
    else if (DoOrNot == 2)
    {
        cout << "현재 판돈으로 가겠습니다 (현재 판돈: " << Betting << ")" << endl;
        cout << "=======================" << endl;
        return Betting;
    }

}

void SelectCard(Trump trump)
{
    switch (trump.shape) {
    case clover:
        cout << "♣ ";
        break;
    case spade:
        cout << "♠ ";
        break;
    case heart:
        cout << "♥ ";
        break;
    case diamond:
        cout << "♦ ";
        break;
    }
    switch (trump.num)
    {
    case 1:
        cout << "A ";
        break;
    case 11:
        cout << "J ";
        break;
    case 12:
        cout << "Q ";
        break;
    case 13:
        cout << "K ";
        break;
    default:
        cout << trump.num << " ";
    }
}