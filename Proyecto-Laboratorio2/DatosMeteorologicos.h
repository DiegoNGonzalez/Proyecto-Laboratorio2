#pragma once
#include "Horario.h"
class DatosMeteorologicos
{
private:
	float _temperatura;
	float _humedad;
	float _presion;
	float _velocidadViento;
	float _lluvia;
	Horario _horasSol;
	public:
		DatosMeteorologicos();
		DatosMeteorologicos(float temperatura, float humedad, float presion, float velocidadViento, float lluvia, Horario horasSol);
		float getTemperatura();
		float getHumedad();
		float getPresion();
		float getVelocidadViento();
		float getLluvia();
		Horario getHorasSol();
		void setTemperatura(float temperatura);
		void setHumedad(float humedad);
		void setPresion(float presion);
		void setVelocidadViento(float velocidadViento);
		void setLluvia(float lluvia);
		void setHorasSol(Horario horasSol);
		std::string toString();
};

