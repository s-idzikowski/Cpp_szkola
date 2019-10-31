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

	double objetosc;
	double pole_podstawy;
	pole_podstawy = (a + b) * h / 2.0;
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
		//to do
		break;
	case 3:
		cout << "Wybrano 3\n";
		//to do 
		break;
	default:
		cout << "Dokonano blednego wyboru\n";
		break;
	}
	cout << "Wybrano: " << wybor << endl;
	
}

