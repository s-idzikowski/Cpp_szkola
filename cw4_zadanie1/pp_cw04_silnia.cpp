/*EF pp2018*/
/*
Obliczanie wartosci n!
dla n z zakresu <a,b> podanego przez uzytkownika
*/
#include<iostream>
using namespace std;
long long oblicz_silnie(int n) {
	long long s = 1;
	if (n < 0)
		return -1;
	if (n > 20)
		return -2;
	for (int i = 2; i <= n; i++) {
		s = s * i;
	}
	return s;
}

int main() {
	long long s;
	int n = 0;
	//wyswietlenie wartosci silni dla n z zakresu <a,b> podanego przez uzytkownika  
	int a, b;
	cout << "podaj dla jakiego zakresu n chcesz obliczyc silnie (np. 2 8): ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		s = oblicz_silnie(i);

		if (s == -1)  //je¿eli nie wykonano obliczeñ z powodu ujemnej wartosci n
			cout << i << " jest ujemna wartoscia\n";
		else if (s == -2) //je¿eli nie wykonano obliczeñ z powodu za du¿ej wartosci n
			cout << i << " jest zbyt duza wartoscia - dozwolna maksymalna wartosc to 20\n";
		else       //w pozosta³ych przypadkach (tzn. je¿eli obliczenia zosta³y wykonane)
			cout <<((i<10)?" ":"")<< i << "! = " << s <<"\n";
	}

}