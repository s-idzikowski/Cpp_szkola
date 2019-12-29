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
		return suma;
	}
float podaj_max(float* t, int n) {
	float max = t[0];
	for (int i = 1; i < n; i++)
	{
		if (max < t[i])
			max = t[i];
	}
	return max;
}
void sortuj_babelkowo(float* t, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			if (t[j - 1] > t[j]) {
				swap(t[j - 1], t[j]);
			}
		}
	}
}


int main() {
	int rozmiar;
	float* tablica = utworz_tablice(rozmiar);
	wypelnij_wartosciami(tablica, rozmiar);
	wyswietl_wartosci(tablica, rozmiar);
	float suma = sumuj(tablica, rozmiar);
	cout << "\nsuma = " << suma;
	float max = podaj_max(tablica, rozmiar);
	cout << "\nmax = " << max;
	sortuj_babelkowo(tablica, rozmiar);
	cout << "\nPosortowana tablica: ";
	wyswietl_wartosci(tablica, rozmiar);
}