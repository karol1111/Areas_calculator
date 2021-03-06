#include "pch.h"


Trojkat::Trojkat(string n, float aa, float hh)
{
	nazwa = n;
	a = aa;
	h = hh;
}
Trojkat::~Trojkat()
{

}

void Trojkat::pole()
{
	cout << "Pole " << nazwa << " wynosi: " << 0.5* a * h << endl;
}
void Trojkat::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ": ";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));

	do
	{
		cout << "Podaj wysokosc " << nazwa << ": ";
		cin >> h;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

Trojkat_row::Trojkat_row(string nt, float aa, float hh)
{
	nazwa = nt;
	a = aa;
	h = hh;
}
Trojkat_row::~Trojkat_row()
{

}

void Trojkat_row::pole()
{
	cout << "Pole " << nazwa << " wynosi: " << (a*a*sqrt(3)) / 4 << endl;
}

void Trojkat_row::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ": ";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));

	do
	{
		cout << "Podaj wysokosc " << nazwa << ": ";
		cin >> h;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

Prostokat::Prostokat(string np, float aa, float bb)
{
	nazwa = np;
	a = aa;
	b = bb;
}
Prostokat::~Prostokat()
{

}

void Prostokat::pole()
{
	cout << endl << "Pole " << nazwa << " wynosi: " << a * b << endl;
}

void Prostokat::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ": ";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));

	do
	{
		cout << "Podaj wysokosc " << nazwa << ": ";
		cin >> b;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

Kwadrat::Kwadrat(string nk, float aa)
{
	nazwa = nk;
	a = aa;

}
Kwadrat::~Kwadrat()
{

}

void Kwadrat::pole()
{
	cout << endl << "Pole " << nazwa << " wynosi: " << a * a << endl;
}

void Kwadrat::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ": ";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}


Rownoleglobok::Rownoleglobok(string nr, float aa, float hh)
{
	nazwa = nr;
	a = aa;
	h = hh;

}
Rownoleglobok::~Rownoleglobok()
{

}

void Rownoleglobok::pole()
{
	cout << endl << "Pole " << nazwa << " wynosi: " << a * h << endl;
}

void Rownoleglobok::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ": ";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));

	do
	{
		cout << "Podaj wysokosc " << nazwa << ": ";
		cin >> h;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

Romb::Romb(string rb, float aa, float hh)
{
	nazwa = rb;
	a = aa;
	h = hh;
}
Romb::~Romb()
{

}

void Romb::pole()
{
	cout << endl << "Pole " << nazwa << " wynosi: " << a * h << endl;
}

void Romb::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ":";
	cin >> nazwa;

	do
	{
		cout << "Podaj podstawe " << nazwa << ":";
		cin >> a;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));

	do
	{
		cout << "Podaj wysokosc " << nazwa << ":";
		cin >> h;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

void Kolo::pole()
{
	cout << "Pole " << nazwa << " wynosi: " << M_PI * r*r << endl;
}

void Kolo::sprawdzamy()
{
	bool dobrze;
	bool zle;

	cout << "Podaj nazwe " << nazwa << ": ";
	cin >> nazwa;

	do
	{
		cout << "Podaj promien " << nazwa << ": ";
		cin >> r;
		dobrze = cin.good();
		zle = cin.bad();
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((dobrze == 0) || (zle == 1));
}

Kolo::Kolo(string nk, float rr)
{
	nazwa = nk;
	r = rr;
}
Kolo::~Kolo()
{

}

