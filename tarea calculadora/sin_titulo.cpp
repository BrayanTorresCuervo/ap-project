// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

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

