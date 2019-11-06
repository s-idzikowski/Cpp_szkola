/*
Program obliczaj¹cy wartoœci objêtoœci i pola powierzchni ca³kowitej nastêpuj¹cych bry³:
a) graniastos³up prosty o podstawie trapezu równoramiennego
b) ostros³up prosty o podstawie prostok¹ta
c) walec
*/
#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void graniastoslup() {
	double a, b, h, h_gran; //a, b - d³ugoœæ podstawy trapeza, h - wysokoœæ podstawy trapeza
	cout << "Podaj dwie dlugosci podstawy trapeza\n";
	cin >> a >> b;
	cout << "Podaj wysokosc podstawy trapeza\n";
	cin >> h;

	cout << "Podaj wysokosc graniastoslupa\n";
	cin >> h_gran;
	if (a <= 0 || b <= 0 || h <= 0 || h_gran <= 0) {
		cout << "Podano zerowa lub ujemna wartosc - nie mozna dokonac obliczen";
	}
	else
	{
		double objetosc;
		double pole_podstawy;
		pole_podstawy = ((a + b) * h) / 2.0;
		objetosc =  pole_podstawy * h_gran;

		double pole_powierzni_calkowitej, pole_powierzchni_bocznej;
		double ramienie_trapeza, d; //d - zmienna pomocnicza do wyznaczenia dlugosci ramienia trapeza
		if (a > b) {
			d = (a - b) / 2;
		}
		else
		{
			d = (b - a) / 2;
		}
		ramienie_trapeza = sqrt(pow(d, 2) + pow(h, 2));
		pole_powierzchni_bocznej = a * h_gran + b * h_gran + 2*(ramienie_trapeza* h_gran);
		pole_powierzni_calkowitej = 2 * pole_podstawy + pole_powierzchni_bocznej;
	
		cout << "Objetosc wynosi: " << objetosc << endl << "Pole powierzchni calkowitej: " << pole_powierzni_calkowitej;
	}

	
}
void ostroslup() {
	double a, b, c;
	cout << "Podaj dwie dlugosci bokow podstawy ostroslupa: \n";
	cin >> a >> b;
	cout << "Podaj dlugosc krawedzi bocznej ostroslupa: \n";
	cin >> c;
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "Podano ujemna lub zerowa wartosc - nie mozna dokonac obliczen";
	}
	else
	{
		double objetosc, pole_podstawy, wysokosc, polPzrekatnejPodstawy;
		pole_podstawy = a * b;
		polPzrekatnejPodstawy = sqrt(pow(0.5 * a, 2) + pow(0.5 * b, 2));
		wysokosc = sqrt(pow(c, 2) - pow(polPzrekatnejPodstawy, 2));

		objetosc = 1.0 / 3 * pole_podstawy * wysokosc;

		cout << "Objetosc wynosi: " << objetosc << endl;

		double powierzchniaCalkowita, powBocznaPierwsza, powBocznaDruga;
		double h1, h2; //zmienne pomocnicze do wyznaczenia wysokosci trojkatow pola powierzchni bocznych
		h1 = sqrt(pow(0.5 * a, 2) + pow(wysokosc, 2));
		h2 = sqrt(pow(0.5 * b, 2) + pow(wysokosc, 2));
		powBocznaPierwsza = 0.5 * a * h1;
		powBocznaDruga = 0.5 * b * h2;
		powierzchniaCalkowita = pole_podstawy + 2 * powBocznaPierwsza + 2 * powBocznaDruga;
		cout << "Powierzchnia calkowita wynosi: " << powierzchniaCalkowita << endl;
	}

	
}
void walec() {
	cout << "Podaj promien podstawy kola (r) oraz wysokosc walca H: ";
	double r, H;
	cin >> r >> H;

	if (r <= 0 || H <= 0) {
		cout << "Podano zerowa lub ujemna wartosc - nie mozna dokonac obliczen";
	}
	else
	{
		double V;
		V = M_PI * pow(r,2) * H; //V - objetosc walca
		cout << "Objetosc walca wynosi: " << V <<endl;

		double Pc, Pp, Pb; //pole calkowite, pole powierzchni podstawy, pole powierzchni bocznej
		Pp = M_PI * pow(r, 2);
		Pb = 2 * M_PI * r * H;
		Pc = 2 * Pp + Pb;

		cout << "Pole powierzchni calkowitej wynosi: " << Pc<< endl;
	}
	
}

int main() {
	int wybor;
	cout << "Program obliczajacy wartosci objetosci i pola powierzchni calkowitej\n"
		<< "--------------------------------------------------------------------\n"
		<< "Podaj bryle\n"
		<< "1 - graniastoslup prosty o podstawie trapezu rownoramiennego\n"
		<< "2 - ostroslup prosty o podstawie prostokata\n"
		<< "3 - walec\n";
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Wybrano 1\n";
		graniastoslup();
		break;
	case 2:
		cout << "Wybrano 2\n";
		ostroslup();
		break;
	case 3:
		cout << "Wybrano 3\n";
		walec();
		break;
	default:
		cout << "Dokonano blednego wyboru\n";
		break;
	}
	
}

