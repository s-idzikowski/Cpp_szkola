/*EFigielska pp2018*/
/*
Wyznaczenie najmniejszej/najwiekszej wartosci sposrod 3 liczb
Uzytkownik podaje trzy liczby oraz okesla, czy chce otrzymac najmniejsza czy najwieksza z nich
Program wypisuje najmniejsza lub najwieksza liczbe zgodnie z wymaganiem uzytkownnika
*/
#include<iostream>
#include<iomanip>
using namespace std;
double wyznacz_min(double x, double y, double z) {  //wyznacza najmniejsza z 3 liczb
	double min = x; //nadanie poczatkowej wartosci do min
	if (y < min)    //jezeli y jest mniejsze niz aktualna wartosc min, to
		min = y;    //zaktualizuj min 
	if (z < min)    //jezeli z jest mniejsze niz aktualna wartosc min, to
		min = z;    //zaktualizuj min 
	return min;
}
double wyznacz_max(double x, double y, double z) {  //oblicza najwieksza z 3 liczb
	double max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}
int main() {
	double lb1, lb2, lb3;  
	int co = 0;   //co = 0 oznacza, ze wyznaczamy minimum, co = 1 - maksimum 
	cout << "podaj trzy liczby: ";
	cin >> lb1 >> lb2 >> lb3;
	cout << "podaj co chcesz wynaczyc (min: 0, max: 1): ";
	cin >> co;
	if (!co)
		cout << "najmniejsza wartosc = " << wyznacz_min(lb1, lb2, lb3);
	else
		cout << "najwieksza wartosc = " << wyznacz_max(lb1, lb2, lb3);
}