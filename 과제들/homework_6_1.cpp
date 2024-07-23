#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void GameStart();
void MyAct(int num, int Attack, int DoubleAttack, int Recovery, int& MyHealth, int& EnemyHealth);
void EnemyAct(int num, int Attack, int DoubleAttack, int Recovery, int& EnemyHealth, int& MyHealth);
bool GameWin(int EnemyHealth);
bool GameLoss(int MyHealth);

int main()
{
    srand(time(NULL));
    int MyHealth = 100;
    int EnemyHealth = 100;

    GameStart();

    int i = 1;

    while (true)
    {
        int MyAttack = rand() % 20 + 1;
        int MyDoubleAttack = rand() % 20 + 10;
        int MyRecovery = rand() % 20 + 1;
        int MyNum = rand() % 4;

        int EnemyAttack = rand() % 20 + 1;
        int EnemyDoubleAttack = rand() % 20 + 10;
        int EnemyRecovery = rand() % 20 + 1;
        int EnemyNum = rand() % 4;

        cout << "Round " << i << endl;
        cout << "MyTurn" << endl;
        MyAct(MyNum, MyAttack, MyDoubleAttack, MyRecovery, MyHealth, EnemyHealth);
        if (GameWin(EnemyHealth) || GameLoss(MyHealth))
        {
            break;
        }

        cout << "EnemyTurn" << endl;
        EnemyAct(EnemyNum, EnemyAttack, EnemyDoubleAttack, EnemyRecovery, EnemyHealth, MyHealth);
        if (GameWin(EnemyHealth) || GameLoss(MyHealth))
        {
            break;
        }

        cout << "__________________________" << endl;

        i++;
    }

    return 0;
}

void GameStart()
{
    cout << "�ؽ�Ʈ ���� ���� ����." << endl;
}

void MyAct(int num, int Attack, int DoubleAttack, int Recovery, int& MyHealth, int& EnemyHealth)
{
    if (num == 0)
    {
        cout << "����," << " ���ݷ�: " << Attack << endl;
        EnemyHealth -= Attack;
        cout << "Enemy ���� ü��: " << EnemyHealth << endl << endl;
    }
    else if (num == 1)
    {
        cout << "ȸ��," << " ȸ����: " << Recovery << endl;
        if (MyHealth + Recovery >= 100)
        {
            MyHealth = 100;
        }
        else
        {
            MyHealth += Recovery;
        }
        cout << "MyHealth ���� ü��: " << MyHealth << endl << endl;
    }
    else if (num == 2)
    {
        cout << "�޼� ����," << " ġ��Ÿ: " << DoubleAttack << endl;
        EnemyHealth -= DoubleAttack;
        cout << "Enemy ���� ü��: " << EnemyHealth << endl << endl;
    }
    else if (num == 3)
    {
        cout << "��..�Ǽ�(�� �� ����)" << endl << endl;
    }
}

void EnemyAct(int num, int Attack, int DoubleAttack, int Recovery, int& EnemyHealth, int& MyHealth)
{
    if (num == 0)
    {
        cout << "����," << " ���ݷ�: " << Attack << endl;
        MyHealth -= Attack;
        cout << "MyHealth ���� ü��: " << MyHealth << endl << endl;
    }
    else if (num == 1)
    {
        cout << "ȸ��," << " ȸ����: " << Recovery << endl;
        if (EnemyHealth + Recovery >= 100)
        {
            EnemyHealth = 100;
        }
        else
        {
            EnemyHealth += Recovery;
        }
        cout << "Enemy ���� ü��: " << EnemyHealth << endl << endl;
    }
    else if (num == 2)
    {
        cout << "�޼� ����," << " ġ��Ÿ: " << DoubleAttack << endl;
        MyHealth -= DoubleAttack;
        cout << "MyHealth ���� ü��: " << MyHealth << endl << endl;
    }
    else if (num == 3)
    {
        cout << "��..�Ǽ�(�� �� ����)" << endl << endl;
    }
}

bool GameWin(int EnemyHealth)
{
    if (EnemyHealth <= 0)
    {
        cout << "�¸��߽��ϴ�!" << endl;
        cout << "���� ����." << endl;
        return true;
    }
    return false;
}

bool GameLoss(int MyHealth)
{
    if (MyHealth <= 0)
    {
        cout << "�й��߽��ϴ�.." << endl;
        cout << "���� ����." << endl;
        return true;
    }
    return false;
}
