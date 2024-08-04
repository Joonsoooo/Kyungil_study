//인간 VS 괴물 

#include <iostream>
#include <time.h>
using namespace std;

class Monster;

class Person
{
private:
	int pHealth;
	int pAttack;
	int pGuard;

public:

	Person()
	{
		pHealth = 100;
	}
	
	void setpHealth(int pHealth)
	{
		this->pHealth = pHealth;
	}
	int getpHealth()
	{
		return pHealth;
	}
	void setmGuard(int pGuard)
	{
		this->pGuard = pGuard;
	}
	int getmGuard()
	{
		return pGuard;
	}
	void setpAttack(int pAttack)
	{
		this->pAttack = pAttack;
	}
	int getpAttack()
	{
		return pAttack;
	}
	
	int pATK(class Monster& m);
};

class Monster
{
private:
	int mHealth;
	int mAttack;
	int mGuard;

public:

	Monster()
	{
		mHealth = 100;
	}

	void setpHealth(int mHealth)
	{
		this->mHealth = mHealth;
	}
	int getmHealth()
	{
		return mHealth;
	}
	void setmGuard(int mGuard)
	{
		this->mGuard = mGuard;
	}
	int getmGuard()
	{
		return mGuard;
	}
	void setmAttack(int mAttack)
	{
		this->mAttack = mAttack;
	}
	int getmAttack()
	{
		return mAttack;
	}
	
	int mATK(Person& p);

};

int main()
{
	Person p;
	Monster m;

	srand(time(NULL));

	int i = 1;
	while (true)
	{
		int pAttack = rand() % 20;
		int pGuard = rand() % 15;

		int mAttack = rand() % 10;
		int mGuard = rand() % 20;

		p.setpAttack(pAttack);
		p.setmGuard(pGuard);
		m.setmAttack(mAttack);
		m.setmGuard(mGuard);

		cout << "Round " << i << endl;

		cout << "인간 공격력 : " << p.getpAttack() << " 인간 방어력 : " << p.getmGuard() << " |" << " 괴물 공격력 " << m.getmAttack() << " 괴물 방어력" << m.getmGuard() << endl;

		cout << endl << "인간 차례" << endl;
		if (pAttack != 0)
		{
			cout << p.getpAttack() << " 공격!" << endl;
			p.pATK(m);
		}
		else if (pAttack == 0)
		{
			cout << "미스" << endl;
		}

		if (m.getmGuard() == 0)
		{
			cout << "치명타!" << endl;
		}

		cout << endl << "괴물 차례" << endl;

		if (mAttack != 0)
		{
			cout << m.getmAttack() << " 공격!" << endl;
			m.mATK(p);
		}
		else if (mAttack == 0)
		{
			cout << "미스" << endl;
		}

		if (p.getmGuard() == 0)
		{
			cout << "치명타!" << endl;
		}

		cout << endl << "인간 체력 : " << p.getpHealth() << " 괴물 체력 : " << m.getmHealth() << endl << endl;

		if (p.getpHealth() <= 0)
		{
			cout << "괴물 승리!" << endl;
			break;
		}
		else if (m.getmHealth() <= 0)
		{
			cout << "인간 승리!" << endl;
			break;
		}
		i++;
	}
}

int Person::pATK(Monster& m)
{
	int newHealth = m.getmHealth() - pAttack + m.getmGuard();
	m.setpHealth(newHealth);

	return m.getmHealth();
}

int Monster::mATK(Person& p)
{
	int newHealth = p.getpHealth() - mAttack + p.getmGuard();
	if (newHealth >= 100)
	{
		p.setpHealth(100);
	}
	else
	{
		p.setpHealth(newHealth);
	}

	return p.getpHealth();
}
