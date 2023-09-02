#include <iostream>
#include <string>
#include <vector>
#include "DatosMeteorologicosDiarios.h"
#include "Sistema.h"
#include "Fecha.h"
#include "Horario.h"




Sistema::Sistema()
{
}

int Sistema::menuPrincipal(int opcion) {
	
	std::cout << "1. Cargar datos del dia" << std::endl;
	std::cout << "2. Cargar datos de otra fecha" << std::endl;
	std::cout << "3. Reporte semanal" << std::endl;
	std::cout << "4. Mostrar datos" << std::endl;
	std::cout << "5. Salir" << std::endl;
	std::cout << "Ingrese una opcion: ";
	std::cin >> opcion;
	return opcion;
}

void Sistema::cargarDatos(std::vector <DatosMeteorologicosDiarios>& datos) {
	Fecha fecha;
	int hora,minuto,segundo;
	std::string descripcion;
	float temperatura;
	float humedad;
	float presion;
	float velocidadViento;
	float lluvia;
	Horario horasSol;
	fecha = Fecha();
	std::cout << "Ingrese la descripcion del tiempo: " << std::endl;
	std::cin >> descripcion;
	std::cout << "Ingrese la temperatura: " << std::endl;
	std::cin >> temperatura;
	std::cout << "Ingrese la humedad: " << std::endl;
	std::cin >> humedad;
	std::cout << "Ingrese la presion: " << std::endl;
	std::cin >> presion;
	std::cout << "Ingrese la velocidad del viento: " << std::endl;
	std::cin >> velocidadViento;
	std::cout << "Ingrese la cantidad de lluvia: " << std::endl;
	std::cin >> lluvia;
	std::cout << "Ingrese las horas de sol: " << std::endl;
	std::cout << "Ingrese la hora: " << std::endl;
	std::cin >> hora;
	std::cout << "Ingrese los minutos: " << std::endl;
	std::cin >> minuto;
	std::cout << "Ingrese los segundos: " << std::endl;
	std::cin >> segundo;
	horasSol = Horario(hora, minuto, segundo);
	DatosMeteorologicosDiarios dia = DatosMeteorologicosDiarios(fecha, descripcion, temperatura, humedad, presion, velocidadViento, lluvia, horasSol);
	datos.push_back(dia);
	std::cout << "Datos cargados correctamente" << std::endl;
	std::cout << dia.getFecha().toString() << std::endl;
	system ("pause");
	system ("cls");

}
void Sistema::mostrarDatos(std::vector <DatosMeteorologicosDiarios>& datos) {
	for (DatosMeteorologicosDiarios dato:datos) {
		std::cout << dato.toString() << std::endl;
	}
	system("pause");
	system ("cls");
}

void Sistema::cargarDatosOtraFecha(std::vector<DatosMeteorologicosDiarios>& datos)
{
	Fecha fecha;
	int hora, minuto, segundo, dia,mes,anio;
	std::string descripcion;
	float temperatura;
	float humedad;
	float presion;
	float velocidadViento;
	float lluvia;
	Horario horasSol;
	std::cout << "Ingrese el dia: " << std::endl;
	std::cin >> dia;
	std::cout << "Ingrese el mes: " << std::endl;
	std::cin >> mes;
	std::cout << "Ingrese el anio: " << std::endl;
	std::cin >> anio;
	fecha = Fecha(dia, mes, anio);
	std::cout << "Ingrese la descripcion del tiempo: " << std::endl;
	std::cin >> descripcion;
	std::cout << "Ingrese la temperatura: " << std::endl;
	std::cin >> temperatura;
	std::cout << "Ingrese la humedad: " << std::endl;
	std::cin >> humedad;
	std::cout << "Ingrese la presion: " << std::endl;
	std::cin >> presion;
	std::cout << "Ingrese la velocidad del viento: " << std::endl;
	std::cin >> velocidadViento;
	std::cout << "Ingrese la cantidad de lluvia: " << std::endl;
	std::cin >> lluvia;
	std::cout << "Ingrese las horas de sol: " << std::endl;
	std::cout << "Ingrese la hora: " << std::endl;
	std::cin >> hora;
	std::cout << "Ingrese los minutos: " << std::endl;
	std::cin >> minuto;
	std::cout << "Ingrese los segundos: " << std::endl;
	std::cin >> segundo;
	horasSol = Horario(hora, minuto, segundo);
	DatosMeteorologicosDiarios dato = DatosMeteorologicosDiarios(fecha, descripcion, temperatura, humedad, presion, velocidadViento, lluvia, horasSol);
	datos.push_back(dato);
	std::cout << "Datos cargados correctamente" << std::endl;
	std::cout << dato.getFecha().toString() << std::endl;
	system("pause");
	system("cls");
}

void Sistema::reporteSemanal(std::vector<DatosMeteorologicosDiarios>& datos, std::vector<DatosMeteorologicosDiarios>& reporte)
{
	for (int i = 0;i < datos.size();i++) {
		reporte.push_back(datos[i]);
	}


	if (reporte.size() < 3) {
		std::cout << "No hay suficientes datos para generar reporte" << std::endl;

	}
	else {
		for (int i = 0; i < 3;i++) {
			std::cout << reporte[i].toString() << std::endl;
		}
	}
}


