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

	cout << "��ų �̸��� �Է��ϼ���." << endl;
	cin >> inputSkill;

	cout << "�������� �Է��ϼ��� (3������ ����)" << endl;
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
	cout << "��ų �̸� : " << "kick" << endl;
	cout << "������ : " << one << endl;
	cout << "ũ��Ƽ�� Ȯ�� : " << "10% " << "�ǰݰŸ� :" << "100cm" << endl;
}

void kick(int one, int two)
{
	cout << "��ų �̸� : " << "Double kick" << endl;
	cout << "������ : " << one << " " << two << endl;
	cout << "ũ��Ƽ�� Ȯ�� : " << "10% 20% " << "�ǰݰŸ� :" << "100cm" << endl;
}

void kick(int one, int two, int three)
{
	cout << "��ų �̸� : " << "Triple kick" << endl;
	cout << "������ : " << one << " " << two << " " << three << endl;
	cout << "ũ��Ƽ�� Ȯ�� : " << "10% 20% 30% " << "�ǰݰŸ� :" << "100cm" << endl;
}
