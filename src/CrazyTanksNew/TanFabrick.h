#pragma once

#include <iostream>
#include <vector>

// �������� ������� ������� ����������
class Tank
{
public:
	virtual void info() = 0;
	virtual ~Tank() {}
};


// ������� ��������
class Factory
{
public:
	virtual Tank* createTank() = 0;
	virtual ~Factory() {}
};

class InfantryFactory : public Factory
{
public:
	Warrior * createWarrior() {
		return new Infantryman;
	}
};

class ArchersFactory : public Factory
{
public:
	Warrior * createWarrior() {
		return new Archer;
	}
};

class CavalryFactory : public Factory
{
public:
	Warrior * createWarrior() {
		return new Horseman;
	}
};


// �������� �������� ��� ������ ������ ��������
int main()
{
	InfantryFactory* infantry_factory = new InfantryFactory;
	ArchersFactory*  archers_factory = new ArchersFactory;
	CavalryFactory*  cavalry_factory = new CavalryFactory;

	vector<Warrior*> v;
	v.push_back(infantry_factory->createWarrior());
	v.push_back(archers_factory->createWarrior());
	v.push_back(cavalry_factory->createWarrior());

	for (int i = 0; i<v.size(); i++)
		v[i]->info();
	// ...
}