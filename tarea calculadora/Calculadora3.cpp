
#include<iostream>
using namespace std;

int main() {
	float a;
	float b;
	int x;
	cout << "Escribe dos numeros" << endl;
	cin >> a >> b;
	while (x!=5) {
		cout << "Elige una funcion" << endl;
		cout << "1=suma" << endl;
		cout << "2=resta" << endl;
		cout << "3=multiplica" << endl;
		cin >> x;
		switch (x) {
		case 1:
			cout << "La suma de" << a << "+" << b << "=" << a+b << endl;
			break;
		case 2:
			cout << "La resta de" << a << "-" << b << "=" << a-b << endl;
			break;
		case 3:
			cout << "La multiplicacion de" << a << "*" << b << "=" << a*b << endl;
			break;
		}
	}
	return 0;
}

