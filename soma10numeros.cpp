#include <iostream>

using namespace std;

int main() {
	const int tam = 10;
	float numeros[tam];
	float soma{ 0.0f };


	for (int i = 0; i < tam; i++)
	{
		cout << "informe o " << (i + 1) << " numero: ";
		cin >> numeros[i];
		soma = soma + numeros[i];


	}


	cout << "a soma dos numeros e: " << soma << endl;



}