/*EFigielska pp2018*/
/*
zliczanie cyfr liczby cakowitej
z wykorzystaniem dzielenia calkowitego
*/
#include<iostream>
using namespace std;
int zlicz_cyfry(long long a){
	int licznik_cyfr;
	if (a == 0) {
		licznik_cyfr = 1;
		return licznik_cyfr;
	}
	if (a < 0) {
		a = abs(a);
	}
	licznik_cyfr = 0;
	
	while (a > 0) {
		a /= 10;
		licznik_cyfr++;
	}
	return licznik_cyfr;
}
	
int main() {
	long long liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "\nilosc cyfr liczby " << liczba << " wynosi " << zlicz_cyfry(liczba);
}