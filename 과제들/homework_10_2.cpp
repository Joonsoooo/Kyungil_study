#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int Puzzle[5][5];

    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int l = 0; l < 5; l++)
        {
            Puzzle[i][l] = count;
            count++;
        }
    }

    Puzzle[4][4] = -1;

    for (int i = 0; i < 100; i++)
    {
        int x1 = rand() % 5;
        int y1 = rand() % 5;
        int x2 = rand() % 5;
        int y2 = rand() % 5;

        if (Puzzle[x1][y1] != -1 && Puzzle[x2][y2] != -1)
        {
            int temp = Puzzle[x1][y1];
            Puzzle[x1][y1] = Puzzle[x2][y2];
            Puzzle[x2][y2] = temp;
        }
    }

    char me;

    while (true)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int l = 0; l < 5; l++)
            {
                if (Puzzle[i][l] == -1)
                {
                    cout << "  ";
                }
                else
                {
                    cout << Puzzle[i][l] << " ";
                }
            }
            cout << endl;
        }

        cin >> me;

        if (me == 'w')
        {
            bool moved = false;
            for (int i = 0; i < 5 && !moved; i++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (Puzzle[i][l] == -1)
                    {
                        if (i == 0)
                        {
                            cout << "더 이상 위쪽은 없어" << endl;
                        }
                        if (i > 0)
                        {
                            int temp = Puzzle[i][l];
                            Puzzle[i][l] = Puzzle[i - 1][l];
                            Puzzle[i - 1][l] = temp;
                            moved = true;
                        }
                        break;
                    }
                }
                if (moved)
                {
                    break;
                }
            }
        }
        else if (me == 'a')
        {
            bool moved = false;
            for (int i = 0; i < 5 && !moved; i++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (Puzzle[i][l] == -1)
                    {
                        if (l == 0)
                        {
                            cout << "더 이상 왼쪽은 없어" << endl;
                        }
                        if (l > 0)
                        {
                            int temp = Puzzle[i][l];
                            Puzzle[i][l] = Puzzle[i][l - 1];
                            Puzzle[i][l - 1] = temp;
                            moved = true;
                        }
                        break;
                    }
                }
                if (moved)
                {
                    break;
                }
            }
        }
        else if (me == 's')
        {
            bool moved = false;
            for (int i = 0; i < 5 && !moved; i++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (Puzzle[i][l] == -1)
                    {
                        if (i == 4)
                        {
                            cout << "더 이상 아래은 없어" << endl;
                        }
                        if (i < 4)
                        {
                            int temp = Puzzle[i][l];
                            Puzzle[i][l] = Puzzle[i + 1][l];
                            Puzzle[i + 1][l] = temp;
                            moved = true;
                        }
                        break;
                    }
                }
                if (moved)
                {
                    break;
                }
            }
        }
        else if (me == 'd')
        {
            bool moved = false;
            for (int i = 0; i < 5 && !moved; i++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (Puzzle[i][l] == -1)
                    {
                        if (l == 4)
                        {
                            cout << "더 이상 왼쪽은 없어" << endl;
                        }
                        if (l < 4)
                        {
                            int temp = Puzzle[i][l];
                            Puzzle[i][l] = Puzzle[i][l + 1];
                            Puzzle[i][l + 1] = temp;
                            moved = true;
                        }
                        break;
                    }
                }
                if (moved)
                {
                    break;
                }
            }
        }
    }
}
