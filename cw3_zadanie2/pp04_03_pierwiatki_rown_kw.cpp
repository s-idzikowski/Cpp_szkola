/*EFigielska pp2018*/
/*
program wyznacza pierwiastki trojmianu kwadratowego:
rzeczywiste i zespolone
*/
#include<iostream>
using namespace std;
void wyznacz_pierwiastki_rown_kw() {
	float a, b, c;	// wspolczynniki
	float delta;    // wyroznik
	cout << "Pierwiastki trojmianu kwadratowego" << endl;
	cout << "Wspolczynnik  a = "; cin >> a;
	if (a == 0)
	{
		cout << "Niepoprawna wartosc a!";
		return; //zakonczenie wykonywania funkcji wyznacz_pierwiastki_rown_kw()
	}
	cout << "Wspolczynnik  b = "; cin >> b;
	cout << "Wyraz wolny c = "; cin >> c;
	delta = b * b - 4 * a * c;		// obliczenie wyróznika
	float skladnik1 = -b / (2 * a); //zmienna pomocnnicza
	float skladnik2 = sqrt(abs(delta)) / (2 * a); //zmienna pomocnicza

	cout << "***** Wyniki obliczen *****" << endl;
	if (delta > 0) { // dwa pierwiastki rzeczywiste
		cout << "x1 = " << skladnik1 - skladnik2 << endl;
		cout << "x2 = " << skladnik1 + skladnik2;
	}
	else
		if (delta < 0) {  // dwa pierwiatki zespolone

			cout << " z1 = " << skladnik1 << '-' << abs(skladnik2) << "i"<<endl;
			cout << " z2 = " << skladnik1 << '+' << abs(skladnik2) << "i";
		}
		else {  // pierwiastek rzeczywisty podwójny
			  cout << "x0 = "<< skladnik1;;
			}
}

int main() {
	wyznacz_pierwiastki_rown_kw();
}

