#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	unsigned int numero_entero_s; // Agregu� la variable que parece estar faltando
	float numero_decimal;
	double numero_decimal_g;
	
	// Asignando valores l�mite de los tipos de dato
	numero_entero_p = 32767;
	cout << "N�mero entero peque�o: " << numero_entero_p << endl;
	
	numero_entero_p1 = 65535; // Este es el valor l�mite del tipo de dato
	cout << "N�mero entero peque�o positivo: " << numero_entero_p1 << endl;
	
	numero_entero = 2147483647;
	cout << "N�mero entero: " << numero_entero << endl;
	
	numero_entero_s = 4294967295;
	cout << "N�mero entero positivo: " << numero_entero_s << endl;
	
	
	return 0;
}
