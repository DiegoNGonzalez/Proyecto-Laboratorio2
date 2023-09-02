#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "DatosMeteorologicosDiarios.h"
class Sistema
{
	public:
	Sistema();
	
	int menuPrincipal(int opcion);
	void cargarDatos(std::vector <DatosMeteorologicosDiarios>& datos );
	void mostrarDatos(std::vector <DatosMeteorologicosDiarios>& datos);
	void cargarDatosOtraFecha(std::vector <DatosMeteorologicosDiarios>& datos);
	void reporteSemanal(std::vector <DatosMeteorologicosDiarios>& datos, std::vector <DatosMeteorologicosDiarios>& reporte);

	private:
		//Atributos
		int opcion;
		


};

