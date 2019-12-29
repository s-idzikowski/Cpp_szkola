#include<iostream>
using namespace std;
float* utworz_tablice(int& n) {
	//utworzenie tablicy o rozmiarze podanym przez uzytkownika
	cout << "podaj rozmiar tablicy: ";
	cin >> n;
	float* t = new float[n]; // definicja tablicy
	return t;
}
 void wypelnij_wartosciami(float* t, int n) {
	//wypelnienie tablicy wartosciami
	cout << "podaj" << n << " wartosci: ";
	for (int i = 0; i < n; i++)
		cin >> t[i];
}
void wyswietl_wartosci(float* t, int n){
	//wyswietlenie wartosci elementow tablicy
	for (int i = 0; i < n; i++)
		cout << t[i] << " ";

	}
float sumuj(float* t, int n) {
		//obliczenie sumy wartosci elemenetow tablicy
		float suma = 0;
		for (int i = 0; i < n; i++)
			suma += t[i]; //suma = suma +t[i]
		cout << "\nsuma = " << suma;
		return suma;
	}


int main() {
	int rozmiar;
	float* tablica = utworz_tablice(rozmiar);
	wypelnij_wartosciami(tablica, rozmiar);
	wyswietl_wartosci(tablica, rozmiar);
	float suma = sumuj(tablica, rozmiar);
	cout << "\nsuma = " << suma;
}