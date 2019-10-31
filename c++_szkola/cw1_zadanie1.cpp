/*
Program przeliczaj¹cy temperaturê podan¹ w stopniach Celsjusza na Fahrenheita
Wynik z dok³adnoœci¹ do 3 miejsc po przecinku
wzor f = 1.8c + 32
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double c, f; //c - t. w stopniach C, f - t. w stopniach F
	cout << "Podaj temperature w stopniach Celsjusza:  ";
	cin >> c;
	f = 1.8 * c + 32;
	cout << fixed << setprecision(3);
	cout << c << " stopni C = " << f << " stopni F";
}