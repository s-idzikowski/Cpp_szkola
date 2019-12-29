#include<iostream>

using namespace std;

bool czy_pierwsza(long long a) {
	//zwraca true, jezeli a jest liczba pierwsza
	//zwraca false, jezeli a nie jest liczba pierwsza
	bool pierwsza = 1;
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			pierwsza = 0;
			break;
		}
	}
	return pierwsza;
}

int main() {
	int a, b;
	cout << "podaj zakres: ";
	cin >> a >> b;
	cout << "liczby pierwsze z podanego zakresu: ";
	for (int i = a; i <= b; i++)
	{
		if (czy_pierwsza(i)) {
			cout << i<< " ";
		}
		
	}
	
	
	
}