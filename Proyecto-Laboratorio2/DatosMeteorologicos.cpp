#include "DatosMeteorologicos.h"

//private:
//	float _temperatura;
//	float _humedad;
//	float _presion;
//	float _velocidadViento;
//	float _lluvia;
//	Horario horasSol;
//	public:
//		DatosMeteorologicos();
//		DatosMeteorologicos(float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol);
//		float getTemperatura();
//		float getHumedad();
//		float getPresion();
//		float getVelocidadViento();
//		float getLluvia();
//		Horario getHorasSol();
//		void setTemperatura(float temperatura);
//		void setHumedad(float humedad);
//		void setPresion(float presion);
//		void setVelocidadViento(float velocidadViento);
//		void setLluvia(float lluvia);
//		void setHorasSol(Horario horasSol);
//		std::string toString();
DatosMeteorologicos::DatosMeteorologicos() {
	_temperatura = 0;
	_humedad = 0;
	_presion = 0;
	_velocidadViento = 0;
	_lluvia = 0;
	_horasSol = Horario(00,00,00);
}
DatosMeteorologicos::DatosMeteorologicos(float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol) {
	_temperatura = temperatura;
	_humedad = humedad;
	_presion = presion;
	_velocidadViento = velocidadViento;
	_lluvia = lluvia;
	_horasSol = horasSol;
}
float DatosMeteorologicos::getTemperatura() {
	return _temperatura;
}
float DatosMeteorologicos::getHumedad() {
	return _humedad;
}
float DatosMeteorologicos::getPresion() {
	return _presion;
}
float DatosMeteorologicos::getVelocidadViento() {
	return _velocidadViento;
}
float DatosMeteorologicos::getLluvia() {
	return _lluvia;
}
Horario DatosMeteorologicos::getHorasSol() {
	return _horasSol;
}
void DatosMeteorologicos::setTemperatura(float temperatura) {
	_temperatura = temperatura;
}
void DatosMeteorologicos::setHumedad(float humedad) {
	_humedad = humedad;
}
void DatosMeteorologicos::setPresion(float presion) {
	_presion = presion;
}
void DatosMeteorologicos::setVelocidadViento(float velocidadViento) {
	_velocidadViento = velocidadViento;
}
void DatosMeteorologicos::setLluvia(float lluvia) {
	_lluvia = lluvia;
}
void DatosMeteorologicos::setHorasSol(Horario horasSol) {
	_horasSol = horasSol;
}
std::string DatosMeteorologicos::toString() {
	std::string str = "Temperatura: " + std::to_string(_temperatura) + " Humedad: " + std::to_string(_humedad) + " Presion: " + std::to_string(_presion) + " Velocidad del viento: " + std::to_string(_velocidadViento) + " Lluvia: " + std::to_string(_lluvia) + " Horas de sol: " + _horasSol.toString();
	return str;
}


