/*
Program obliczaj¹cy wartosc y z podanego wzoru
*/
#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	cout << "Podaj w kolejnosci: x, y0, v0, kat Alfa\n"
		<< "[x - odleglosc w poziomie]\n"
		<< "[y0 - wysokosc z ktorej pilka zostaje rzucona, podawana w metrach]\n"
		<< "[v0 - predkosc poczatkowa podawana w km/h]\n"
		<< "[kat Alfa - kat podany w stopniach]\n";
	const double g = 9.81; //m/s
	double y, x, y0, v0, alfa, alfaR, v0wMS;
	cin >> x >> y0 >> v0 >> alfa;
	alfaR = alfa * M_PI / 180; //zamiana stopni na radiany
	v0wMS = v0 * 1000 / 3600;
	

	y = x * tan(alfaR) - (1 / (2 * pow(v0wMS, 2))) * (g * pow(x, 2) / (pow(cos(alfaR), 2))) + y0;
	cout << "wynik to: " << y;
}