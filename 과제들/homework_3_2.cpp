#include <iostream>
#include <Windows.h>
using namespace std;

void TextColor(int font, int backGround);

int main()
{
	cout << "[무기 목록]" << endl;
	cout << "=================" << endl << endl;
	cout << "총" << endl;
	cout << "가격: 5000원" << endl;
	cout << "특성: 맞으면 즉사" << endl;
	cout << "-----------------" << endl;

	cout << "단검" << endl;
	cout << "가격: 1500원" << endl;
	cout << "특성: 짧지만 찔리면 즉사" << endl;

	TextColor(0, 0);
	cout << "□□□□□□";
	TextColor(8, 8);
	cout << "■■";
	TextColor(0, 0);
	cout << "□□□□□□□" << endl;

	cout << "□□□□□□";
	TextColor(8, 8);
	cout << "■■■";
	TextColor(0, 0);
	cout << "□□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□□□□";
	TextColor(8, 8);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "□□□□□" << endl;

	cout << "□□";
	TextColor(6, 6);
	cout << "■■■■■■■■■■■";
	TextColor(0, 0);
	cout << "□□" << endl;

	cout << "□□";
	TextColor(6, 6);
	cout << "■■■■■■■■■■■";
	TextColor(0, 0);
	cout << "□□" << endl;

	cout << "□□□□□";
	TextColor(11, 11);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "□□□□□□" << endl;

	cout << "□□□□□";
	TextColor(11, 11);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "□□□□□□" << endl;

	cout << "□□□□□";
	TextColor(11, 11);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "□□□□□□" << endl;

	cout << "□□□□□";
	TextColor(11, 11);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "□□□□□□" << endl;
	cout << "----------------------" << endl;

	TextColor(15, 0);

	cout << "장검" << endl;
	cout << "가격: 1500원" << endl;
	cout << "특성: 길지만 뭉툭한 검" << endl;
	cout << "-----------------------" << endl;

	cout << "[방어구 목록]" << endl;
	cout << "=======================" << endl << endl;
	cout << "갑옷" << endl;
	cout << "가격: 10000원" << endl;
	cout << "특성: 무조건 한 번 막아줌" << endl;
	cout << endl;

	TextColor(14, 0);

	cout << "    ■■■■■■■■■■■■" << endl;
	cout << "    ■■■■■■■■■■■■" << endl;
	cout << "    ■■■■■■■■■■■■" << endl;
	cout << "    ■■■■■■■■■■■■" << endl;
	cout << "    ■■■      ■■■" << endl;
	cout << "    ■■■■■■■■■■■■" << endl;
	cout << "      ■■■■■■■■" << endl;
	cout << "       ■■■■■■ " << endl;

	TextColor(15, 0);
	cout << "---------------------------" << endl;
	cout << "신발" << endl;
	cout << "가격: 10000원" << endl;
	cout << "특성: 달리기 가능" << endl;
	cout << "----------------------";
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}