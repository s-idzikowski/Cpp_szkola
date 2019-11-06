/*EF pp2018*/
/*
Przeliczanie temperatury
if...else if...else
switch
*/
#include<iostream>
#include<iomanip>
using namespace std;
void przeliczFnaC() {
	float c, f;
	cout << "\npodaj temperature w stopniach Fahrenheita: ";
	cin >> f;
	if (f > -459.6667) {
		c = (f - 32) / 1.8000;
		cout << fixed << setprecision(2) << f << " F = " << c << " C";
	}
	else
		cout << "blad, podales temperature ponizej zera bezwzglednego";
}
void przeliczCnaF() {
	float c, f;
	cout << "\npodaj temperature w stopniach Celsjusza: ";
	cin >> c;
	if (c > -273, 15) {
		f = 9.0 / 5 * c + 32;
		cout << fixed << setprecision(2) << c << " C = " << f << " F";
	}
	else
	{
		cout << "blad, podales temperature ponizej zera bezwzglednego";
	}
}
int main() {
	cout << "przeliczanie temperatury";
	cout << "\nF->C (1)  lub C->F (2): ";
	int wybor;
	cin >> wybor;
	//if (wybor == 1)  // == operator porownania
	//	przeliczFnaC();
	//else if (wybor == 2)
	//	przeliczCnaF();
	//else
	//	cout << "\nnie ma takiej opcji";
	switch (wybor) {
	case 1: przeliczFnaC(); break;
	case 2: przeliczCnaF(); break;
	default: cout << "\nnie ma takiej opcji"; break;
	}
}