#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double obliczX(double x, int p) {
	double wynik = x;
	int flaga = 0;
	if (p == 0) {
		return  1.0;
	}
	if (p < 0) {
		p = -p;
		flaga = 1;
	}
	for (int i = 1; i < p; i++)
		{
			wynik = wynik * x;
		}
	if (flaga) {
		wynik = 1.0 / wynik;
	   }
	return wynik;
}

int main() {
	double x;
	int p;
	
	cout << "Podaj x: ";
	cin >> x;
	cout << "\nPodaj p: ";
	cin >> p;
	cout << setprecision(3) << obliczX(x, p);

	//int q;
	//cin >> q;
}