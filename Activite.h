#ifndef ACTIVITE
#define ACTIVITE


#include "Event.h"



using namespace std;
using namespace TIME;
/*!
\class Activite
\brief Classe Abstraite m�re des diff�rentes taches
*/
class Activite : public Event
{
public:
	string getType()//<! red�finition pour renvoyer le bon type
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