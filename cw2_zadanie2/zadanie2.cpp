/*program, który umo¿liwi przeliczanie odleg³oœci z kilometrów na mile l¹dowe i odwrotnie.
zalozenia:
1 - Przeliczanie odbywa sie wedlug wzoru 1km = 0.621371192 mi; wspolczynnik zadeklarowany jako stala
2 - Kazde przeliczanie odbywa sie w osobnej funkcji
3 - Sygnalizacja wprowadzenia odleglosci mniejszej niz 0
4 - Uzytkownik ma wybor czy chce przeliczac km na mile czy mile na km
5 - przetestowac program i udokumentowac
*/

#include <iostream>
#include <iomanip>

using namespace std;

double const wspolczynnik = 0.621371192;
double km, mi;
void kmNaMile() {
	cout << "Podaj ilosc km\n";
	cin >> km;
	if (km >= 0) {
		mi = km * wspolczynnik;
		cout << km << " km = " << mi << " mi";
	}
	else
	{
		cout << "Podano ujemna wartosc km";
	}
}

void mileNaKM() {
	cout << "Podaj ilosc mi\n";
	cin >> mi;
	if (mi >= 0) {
		km = mi / wspolczynnik;
		cout << mi << " mi = " << km << " km";
	}
	else
	{
		cout << "Podano ujemna wartosc mil";
	}
}

int main() {
	cout << "Program umozliwiajacy przeliczanie odleglosci:\n"
		<< "---------------------------------------------\n"
		<< "1 - z km na mile\n"
		<< "2 - z mili na km\n"
		<< "---------------------------------------------\n"
		<< "Dokonaj wyboru (1) lub (2): ";
	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		kmNaMile();
		break;
	case 2:
		mileNaKM();
		break;
	default:
		cout << "Dokonano blednego wyboru";
		break;
	}
}

/* TESTY:
1. menu: wybor 1 - wywoluje fukcje kmNaMile
	a) podanie wartosci ujemnej - wypisuje komunikat na ekranie, iz podano wartosc ujemna
	b) podanie wartosci dodatniej (w tym 0) - oblicza i zwraca wynik
2. menu: wybor 2 - wywoluje fukcje mileNaKm
	a) podanie wartosci ujemnej - wypisuje komunikat na ekranie, iz podano wartosc ujemna
	b) podanie wartosci dodatniej (w tym 0) - oblicza i zwraca wynik
3. menu: wybor inny niz 1 lub 2 - wypisuje komunikat, iz dokonano blednego wyboru

*/