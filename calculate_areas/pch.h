#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

#ifndef PCH_H
#define PCH_H

class Fig_plaskie
{
public:
	virtual void pole() = 0;
	virtual void sprawdzamy() = 0;
};

class Trojkat :public Fig_plaskie
{
	string nazwa;
	float a, h;
public:

	Trojkat(string = "trojkata", float = 1, float = 1);
	~Trojkat();
	virtual void pole();
	virtual void sprawdzamy();
};

class Trojkat_row :public Fig_plaskie
{
	string nazwa;
	float a, h;
public:

	Trojkat_row(string = "trojkata rownobocznego", float = 1, float = 1);
	~Trojkat_row();
	virtual void pole();
	virtual void sprawdzamy();
};

class Prostokat :public Fig_plaskie
{
	string nazwa;
	float a, b;
public:

	Prostokat(string = "prostokata", float = 1, float = 2);
	~Prostokat();
	virtual void pole();
	virtual void sprawdzamy();
};

class Kwadrat :public Fig_plaskie
{
	string nazwa;
	float a;
public:

	Kwadrat(string = "kwadratu", float = 1);
	~Kwadrat();
	virtual void pole();
	virtual void sprawdzamy();
};

class Rownoleglobok :public Fig_plaskie
{
	string nazwa;
	float a, h;
public:

	Rownoleglobok(string = "rownolegloboku", float = 1, float = 1);
	~Rownoleglobok();
	virtual void pole();
	virtual void sprawdzamy();
};

class Romb :public Fig_plaskie
{
	string nazwa;
	float a;
	float h;
public:
	Romb(string = "rombu", float = 1, float = 1);
	~Romb();
	virtual void pole();
	virtual void sprawdzamy();
};

class Kolo :public Fig_plaskie
{
	string nazwa;
	float r;
public:
	Kolo(string = "kola", float = 1);
	~Kolo();
	virtual void pole();
	virtual void sprawdzamy();
};


void oblicz_pole();



#endif //PCH_H
