/*EFigielska pp2018*/
/*
Obliczanie sredniej:
  arytmetycznej, geometrycznej, harmonicznej i potęgowej
  dwoch liczb rzeczywistych
Program uwzglednia:  
sytuacje, w ktorej obliczen nie mozna wykonac:
  pierwiastek z liczby ujemnej - moze sie zdarzyc przy obliczaniu sredniej geometrycznej
oraz sytuacje, w ktorej wynikiem obliczen jest nieskonczonosc:
  dzielenie przez 0 - moze sie zdarzyc przy obliczaniu sredniej harmonicznej
*/
#include<iostream>
#include<iomanip>
using namespace std;
double sr_a(double x, double y) { // srednia arytmetyczna
	return (x + y) / 2;
}
double sr_g(double x, double y) { //srednia geometryczna
	return  sqrt(x*y);  //funkcja zwroci NaN jeżeli liczba pod pierwiastkiem bedzie ujemna
}
double sr_h(double x, double y) { //srednia harmoniczna
	double pom = (1.0 / x + 1.0 / y);
	if (!isinf(pom))
		return 2 / pom;
	return pom;
}
double sr_p(double x, double y, double k) { //srednia potegowa
	double pom_licznik = (pow(x, k) + pow(y, k));
	return pow(pom_licznik / 2.0, 1.0 / k);
}
int main() {
	double  wynik, liczba1, liczba2;
	bool flaga = 1;
	char wybor=' '; //wybor jest zmienna typu znakowego
	cout << "jaka srednia obliczyc?";
	cout << "\n\ta - arytmetyczna\n\tg - geometryczna\n\th - harmoniczna\n\tp - potegowa\n";
	cin >> wybor;
	cout << "podaj dwie liczby ";
	cin >> liczba1 >> liczba2;
	switch (wybor) {
	case 'a': 
		wynik = sr_a(liczba1, liczba2);
		break;
	case'g': 
		wynik = sr_g(liczba1, liczba2);
		break;
	case'h':
		wynik = sr_h(liczba1, liczba2);
		break;
	case'p':
		double rzad;
		cout << "Podaj rzad potegi: ";
		cin >> rzad;
		wynik = sr_p(liczba1, liczba2, rzad);
		break;
	default: 
		flaga = 0;  
	}
	if (!flaga)  
		cout << "nieokreslona srednia";
	else 
		if (isnan(wynik) || isinf(wynik)) //jezeli wynik jest rowny NaN lub INFINITY (nie udalo sie wykonac obliczen)
			cout << "bledne dane - nie mozna wykonac obliczen";
		else //jezeli udalo sie wykonac obliczenia
			cout << "wynik = "<<wynik; 
	
}