#include <iostream>
#include <Windows.h>
using namespace std;
//��, ��

void TextColor(int font, int backGround);

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}