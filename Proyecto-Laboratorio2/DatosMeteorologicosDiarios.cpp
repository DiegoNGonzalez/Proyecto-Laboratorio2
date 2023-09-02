#include "DatosMeteorologicosDiarios.h"
#include "DatosMeteorologicos.h"
#include "Fecha.h"
#include "Horario.h"

//class DatosMeteorologicosDiarios : public DatosMeteorologicos
//{
//private:
//	Fecha _fecha;
//	std::string _descripcionTiempo;
//public:
//	DatosMeteorologicosDiarios();
//	DatosMeteorologicosDiarios(Fecha fecha, std::string descripcionTiempo, float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol);
//	Fecha getFecha();
//	std::string getDescripcionTiempo();
//	void setFecha(Fecha fecha);
//	void setDescripcionTiempo(std::string descripcionTiempo);
//	std::string toString();
//
//};
DatosMeteorologicosDiarios::DatosMeteorologicosDiarios() {
	_fecha = Fecha();
	_descripcionTiempo = "";
}
DatosMeteorologicosDiarios::DatosMeteorologicosDiarios(Fecha fecha, std::string descripcionTiempo, float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol) : DatosMeteorologicos(temperatura, humedad, presion, velocidadViento, lluvia, horasSol) {
	_fecha = fecha;
	_descripcionTiempo = descripcionTiempo;
}
Fecha DatosMeteorologicosDiarios::getFecha() {
	return _fecha;
}
std::string DatosMeteorologicosDiarios::getDescripcionTiempo() {
	return _descripcionTiempo;
}
void DatosMeteorologicosDiarios::setFecha(Fecha fecha) {
	_fecha = fecha;
}
void DatosMeteorologicosDiarios::setDescripcionTiempo(std::string descripcionTiempo) {
	_descripcionTiempo = descripcionTiempo;
}
std::string DatosMeteorologicosDiarios::toString() {
	std::string str = "";
	str += _fecha.toString() + " " + _descripcionTiempo + " Temperatura: " + std::to_string(getTemperatura()) + "° Humedad: " + std::to_string(getHumedad()) + "% Presion: " + std::to_string(getPresion()) + " Velocidad del viento: " + std::to_string(getVelocidadViento()) + "km/H Precipitaciones: " + std::to_string(getLluvia()) + " ml Horas de sol: " + getHorasSol().toString();
	return str;
}
std::string DatosMeteorologicosDiarios::toCSVString() {
	std::string str = "";
	str += _fecha.toString() + ",";
	str += _descripcionTiempo + ",";
	str += std::to_string(getTemperatura()) + ",";
	str += std::to_string(getHumedad()) + ",";
	str += std::to_string(getPresion()) + ",";
	str += std::to_string(getVelocidadViento()) + ",";
	str += std::to_string(getLluvia()) + ",";
	str += getHorasSol().toString();
	return str;
}