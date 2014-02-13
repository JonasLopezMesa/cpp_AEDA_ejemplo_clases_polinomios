/*
#include <iostream>
using namespace std;
int main (){
	int n;
	
	
	
	void cr(int &n){
	a = 0;
	while (a == 0) {

		cout << "introduce un número" << endl;
		cin >> n;
	
		if (n >= 3 && n <= 15) {
			cout << "el número esta entre 3 y 15, bien." << endl;
			
			
			if (n % 2 == 0) {
				cout << "pero el número no es impar :("<< endl;
			}
			else {
				cout << "y el número es impar" << endl;
				a = 1;
			}

		}
		else {
			cout << " numero incorrecto" << endl;
		}
		

		
		}
		
	}
	
	int cuadrado[n][n];
	int finicial = 0, finicial2 = 0;
	int cinicial = n/2, cinicial2 = n/2;
	cuadrado[finicial][cinicial] = 1
	for(i = 2; i <(n*n); i++){

		finicial2 = finicial;
		cinicial2 = cinicial;
		finicial- =1;
		cinicial+ =1;
	}

	
	if (finicial == -1) {
		finicial = n-1;
	}
	if (cinicial == n) {
		cinicial = 0;
	}
	if (cuadrado[finicial][cinicial] == 0)) {
		cudrado[finicial][cinicial] = i;
	}
	else {
		finicial = finicial2 + 1;
		cinicial = cinicial2;
		if (finicial == n) {
			finicial = 0;
		}
		cuadrado[finicial][cinicial] = i;
		
	}
}

	
*/	



/*
 
n tiene que ser un numero impar entre 3 y 15

 numeros desde 1 hasta n^2
1 = primera fila posicion central fila 0 columna n/2
el siguiente numero iria encima a la derecha
si esta ocupado, se pone debajo.
posicion de la fila, y posicion de la columna

*/


/* Class Ctermino
privado: 
coeficiente exponente
metodos:
 construir término
 acceder al coeficiente
 Acceder al exponente
 imprimir una cadena de caracteres equivalente a un término |+/-|
 
Class Cpolinomio
privado:
 grado
 terminos ---> CTermiino terminos[12]
metodos:
 construir polinomio
 Obtener Grado
 Sumar polinomios
 Imprimir polinomio
*/

#include <iostream>
#include <string>
using namespace std;


class CTermino{
	
private:
	double coeficiente;
	int exponente;
public:
	CTermino();
	~CTermino();
	void Asignar_coeficiente(double coef);
	void Asignar_exponente(int exp);
	void Acceder_coeficiente();
	void Acceder_exponente();
	void Imprimir_cadena();
	
};

void CTermino::Asignar_coeficiente(double coef){
	
	coeficiente = coef;
	
}

void CTermino::Asignar_exponente(int exp){
	
	exponente = exp;
	
}

void CTermino::Imprimir_cadena(){
	
	cout << coeficiente << "x^" << exponente << endl;
	
}


class CPolinomio{
	
private:
	int grado;
	CTermino *termino;
public:
	CPolinomio();
	~CPolinomio();
	void Construir_polinomio(CTermino *termino, int grado);
	void Obtener_grado(CTermino *termino, int grado);
	string Sumar_Polinomios(CTermino *termino, int grado);
	void Imprimir_Polinomio(CTermino *termino, int grado);
	
	
};


int main (){
	
	cout << "Hola" << endl;
	
	
	CTermino termino1();
	s
	termino1.Asignar_exponente(int exp);
	termino1.Asignar_coeficiente(double coef);
	termino1.Imprimir_cadena();
	
	return 0;
	
}

























