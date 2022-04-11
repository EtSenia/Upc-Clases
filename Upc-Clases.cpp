#include <iostream>

//Me acostumbre a no usar using namespace por problemas que tuve con algunas librerias

int main()
{
	int codigo_entrada = NULL;


	std::cout << "Ingrese el codigo de salida: ";
	std::cin >> codigo_entrada;


	int unidad = codigo_entrada % 10;
	int centena_decena = (codigo_entrada / 10) % 100;
	int ultimo = codigo_entrada / 1000;
	
	bool piura = (ultimo == 1);
	bool ica = (ultimo == 2);
	bool ayacucho = (ultimo == 3);

	char departamento = (piura * 'P') + (ica * 'I') + (ayacucho * 'A');

	char realizan_paradas = ((unidad == 1) * 'S') + ((unidad == 2) * 'N');


	std::cout << "Departamento de destino: " << departamento << '\n';
	std::cout << "Hora de salida: " << centena_decena << '\n';
	std::cout << "Realizan paradas: " << realizan_paradas << '\n';

}