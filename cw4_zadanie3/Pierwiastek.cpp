#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double oblicz_pierwiastek(double x, double e) {
	double w = 1.0;
	
	while (abs(pow(w, 2) - x) >= e)
	{
		w = (x / w + w) / 2;
		cout << "*"; //ilosc iteracji
	}
	return w;
}

int main() {
	double m;
	m = 16;
	cout << fixed << setprecision(8) << oblicz_pierwiastek(m, 0.1) << endl;
	cout << fixed << setprecision(8) << oblicz_pierwiastek(m, 0.01) << endl;
	cout << fixed << setprecision(8) << oblicz_pierwiastek(m, 0.001) << endl;
	cout << fixed << setprecision(8) << oblicz_pierwiastek(m, 0.0001) << endl;
}