#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << "Podaj dochod do obliczenia: ";
	double dochod, podatek;
	cin >> dochod;

	if (dochod >= 0) {
		if (dochod > 74048.00) {
			podatek = 17648.44 + (dochod - 74048.00) * 0.40;
		}
		else
		{
			if (dochod > 37024) {
				podatek = 6541.24 + (dochod - 37024) * 0.30;
			}
			else
			{
				podatek = 0.19 * dochod - 493.32;
				
			}
		}
	}
	else
	{
		cout << "Bledny dochod - dochod ujemnej wartosci";
	}
	if (podatek <= 0) {
		cout << "Brak podatku do zaplaty";
	}
	else
	{
		cout << fixed << setprecision(2) << "Podatek od dochodu: " << dochod << " wynosi: " << podatek;
	}
	
}