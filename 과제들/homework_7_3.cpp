#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void main()
{
    srand(time(NULL));

    int Computer[3];
    int Player[3];
    int Out = 0;
    int Strike = 0;
    int Ball = 0;

    while (Out != 3)
    {
        for (int i = 0; i < 3; )
        {
            bool duplicate = false;
            int num = rand() % 10 + 1;

            for (int j = 0; j < i; j++)
            {
                if (Computer[j] == num)
                {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate)
            {
                Computer[i] = num;
                i++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << Computer[i] << " ";
        }

        cout << "�¾�" << endl;
        cout << "���� �Է� (1~10)" << endl;

        for (int i = 0; i < 3; i++)
        {
            cin >> Player[i];
            if (Player[i] <= 0 || Player[i] >= 11)
            {
                cout << "�ٽ� �Է��ϼ���." << endl;
                i--;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (Computer[i] == Player[i])
            {
                Strike++;
            }

            for (int j = 0; j < 3; j++)
            {
                if (Computer[i] == Player[j] && i != j)
                {
                    Ball++;
                }
            }
        }

        if (Strike >= 3)
        {
            cout << "3��Ʈ����ũ" << endl;
            cout << "================" << endl << endl;
            Out++;
            Strike = 0;
            Ball = 0;
        }

        cout << Strike << " ��Ʈ����ũ " << Ball << " �� " << Out << " �ƿ�" << endl;

    }
}
