#ifndef ACTIVITE
#define ACTIVITE


#include "Event.h"



using namespace std;
using namespace TIME;
/*!
\class Activite
\brief Classe Abstraite mère des différentes taches
*/
class Activite : public Event
{
public:
	string getType()//<! redéfinition pour renvoyer le bon type
	{
		return "Activite";
	}
	void setDebut()
	{

	}
	void setFin()
	{

	}
	void setDuree()
	{

	}
};

#endif