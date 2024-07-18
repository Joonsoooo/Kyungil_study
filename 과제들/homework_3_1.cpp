#include <iostream>
#include <Windows.h>
using namespace std;

//¡á, ¡à

void TextColor(int font, int backGround);

void main()
{
//1
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//2
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//3
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//4
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//5
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//6
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//7
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//7
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//8
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//9
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//10
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//11
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//12
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//13
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(4, 4);
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à";
	cout << "¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à";
	cout << "¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à";
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//14
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	cout << "¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à";
	cout << "¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à";
	TextColor(0, 0);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//15
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	cout << "¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à";
	cout << "¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à";
	cout << "¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//16
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(7, 7);
	cout << "¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(7, 7);
	cout << "¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//17
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(7, 7);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;


	//19
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á";
	TextColor(7, 7);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//20
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//21
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//22
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//23
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";

	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//24
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//25	
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//26
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(3, 3);
	cout << "¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;
	
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//27
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//28
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//29
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//30
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//31
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á";
	TextColor(12, 12);
	cout << "¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//32
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;

	//33
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à";
	TextColor(8, 8);
	cout << "¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;


	//34
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à";
	TextColor(2, 2);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à";
	TextColor(2, 2);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	TextColor(0, 0);
	cout << "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}