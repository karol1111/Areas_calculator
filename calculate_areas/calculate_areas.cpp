#include "pch.h"
#include <iostream>
#include <string>

void oblicz_pole(Fig_plaskie *x)
{
	x->pole();
}

using namespace std;

int main()
{
	int nr;

	Fig_plaskie *wskaznik;
	for (;;)
	{
		cout << "1. Trojkat" << endl;
		cout << "2. Trojkat rownoboczny" << endl;
		cout << "3. Prostokat" << endl;
		cout << "4. Kwadrat" << endl;
		cout << "5. Rownoleglobok" << endl;
		cout << "6. Romb" << endl;
		cout << "7. Kolo" << endl;
		cout << "00. Wyjscie" << endl;
		cout << "Wybierz numer: ";
		cin >> nr;

		switch (nr)
		{
		case 1:
		{
			Trojkat tr;
			tr.sprawdzamy();
			wskaznik = &tr;
			oblicz_pole(wskaznik);
		}
		break;
		case 2:
		{
			Trojkat_row troj;
			troj.sprawdzamy();
			wskaznik = &troj;
			oblicz_pole(wskaznik);
		}
		break;
		case 3:
		{
			Prostokat pr;
			pr.sprawdzamy();
			wskaznik = &pr;
			oblicz_pole(wskaznik);
		}
		break;
		case 4:
		{
			Kwadrat kw;
			kw.sprawdzamy();
			wskaznik = &kw;
			oblicz_pole(wskaznik);
		}
		break;
		case 5:
		{
			Rownoleglobok rw;
			rw.sprawdzamy();
			wskaznik = &rw;
			oblicz_pole(wskaznik);
		}
		break;
		case 6:
		{
			Romb rb;
			rb.sprawdzamy();
			wskaznik = &rb;
			oblicz_pole(wskaznik);
		}
		break;
		case 7:
		{
			Kolo ko;
			ko.sprawdzamy();
			wskaznik = &ko;
			oblicz_pole(wskaznik);
		}
		break;
		case 00:
		{
			goto koniec;
		}
		break;
		default:
		{
			cout << "Nie ma takiego numeru" << endl << endl;
			exit(0);
		}
		break;
		}
		cout << endl;
	}

koniec:
	return 0;
}
