#include <iostream>
using namespace std;

void kick(int one);
void kick(int one, int two);
void kick(int one, int two, int three);

void main()
{
	string inputSkill;
	int Damage;
	int one, two, three;

	cout << "스킬 이름을 입력하세요." << endl;
	cin >> inputSkill;

	cout << "데미지를 입력하세요 (3번까지 가능)" << endl;
	cin >> one;

	if (inputSkill == "kick")
	{
		if (one != 0)
		{
			cin >> two;
			if (two != 0)
			{
				cin >> three;
				if (three != 0)
				{
					kick(one, two, three);
				}
				else
				{
					kick(one, two);
				}
			}
			else {
				kick(one);
			}
		}
	}
}

void kick(int one)
{
	cout << "스킬 이름 : " << "kick" << endl;
	cout << "데미지 : " << one << endl;
	cout << "크리티컬 확률 : " << "10% " << "피격거리 :" << "100cm" << endl;
}

void kick(int one, int two)
{
	cout << "스킬 이름 : " << "Double kick" << endl;
	cout << "데미지 : " << one << " " << two << endl;
	cout << "크리티컬 확률 : " << "10% 20% " << "피격거리 :" << "100cm" << endl;
}

void kick(int one, int two, int three)
{
	cout << "스킬 이름 : " << "Triple kick" << endl;
	cout << "데미지 : " << one << " " << two << " " << three << endl;
	cout << "크리티컬 확률 : " << "10% 20% 30% " << "피격거리 :" << "100cm" << endl;
}
