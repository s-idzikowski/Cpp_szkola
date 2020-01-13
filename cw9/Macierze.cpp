/*EFigielska pp2019*/
#include<iostream>
#include "Macierze.h"
using namespace std;
float** utworz(int n, int m) {
	float** t = new float* [n];
	for (int i = 0; i < n; i++) {
		t[i] = new float[m];
	}
	return t;
}
//
void wpisz(float** t, int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cout << "t[" << i << "][" << j << "] = ";
			cin >> t[i][j];
		}
}
void wypisz(float** t, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
}

void usun(float** t, int n) {
	for (int i = 0; i < n; i++) {
		delete[] t[i];
	}
	delete[] t;
}

void dodaj_macierze(float** t, float** t2, int n, int m, int n2, int m2) {
	if (n == n2 && m == m2)
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << t[i][j]+t2[i][j] << " ";
			}
			cout << "\n";
		}
	}
	else
	{
		cout << "Dodawanie macierzy mozliwe jest tylko przy jednakowych wymiarach" << endl;
	}
}

void mnozenie_macierzy(float** t, float** t2, int n, int m, int n2, int m2) {
	if (m == n2)
	{
		float** tab_wynik = utworz(n, m2);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m2; j++) {
				float wynik = 0;
				for (int k = 0; k < m; k++)
				{
					wynik += t[i][k] * t2[k][j];
				}
				tab_wynik[i][j] = wynik;
			}
		}
		wypisz(tab_wynik, n, m2);
		usun(tab_wynik, n);
	}
	else
	{
		cout << "Mnozenie macierzy nie jest mozliwe.\n Liczba kolumn pierwszej jest rozna od liczby wierszy drugiej" << endl;
	}
}

void transpozycja(float** t, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << t[j][i] << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n, m, n2, m2;
	cout << "Macierz nr 1" << endl;
	cout << "liczba wierszy = "; cin >> n;
	cout << "liczba kolumn = "; cin >> m;
	cout << "Macierz nr 2" << endl;
	cout << "liczba wierszy = "; cin >> n2;
	cout << "liczba kolumn = "; cin >> m2;
	float** tab = utworz(n, m);
	float** tab2 = utworz(n2, m2);
	cout << "Macierz 1:" << endl;
	wpisz(tab, n, m);
	cout << "Macierz 2:" << endl;
	wpisz(tab2, n2, m2);
	cout << "\nMacierz 1 = \n";
	wypisz(tab, n, m);
	cout << "\nMacierz 2 = \n";
	wypisz(tab2, n2, m2);
	cout << "\nMacierz 1 + Macierz 2 = \n";
	dodaj_macierze(tab, tab2, n, m, n2, m2);
	cout << "\nMacierz 1 * Macierz 2 = \n";
	mnozenie_macierzy(tab, tab2, n, m, n2, m2);
	cout << "\nMacierz 1 transponowana = \n";
	transpozycja(tab, n, m);

	usun(tab, n);
	usun(tab2, n2);

}
