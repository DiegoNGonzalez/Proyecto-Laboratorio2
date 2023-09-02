#pragma once
#include "DatosMeteorologicos.h"
#include "Fecha.h"



class DatosMeteorologicosDiarios : public DatosMeteorologicos
{
private:
	Fecha _fecha;
	std::string _descripcionTiempo;
public:
	DatosMeteorologicosDiarios();
	DatosMeteorologicosDiarios(Fecha fecha, std::string descripcionTiempo, float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol);
	Fecha getFecha();
	std::string getDescripcionTiempo();
	void setFecha(Fecha fecha);
	void setDescripcionTiempo(std::string descripcionTiempo);
	std::string toString();
	std::string toCSVString();

};
