#ifndef TACHE
#define TACHE

#include "Event.h"

using namespace std;
using namespace TIME;
/*!
\class Tache
\brief Classe Abstraite m�re des diff�rentes taches
*/
class Tache : public Event
{
protected :
map <string, Tache*> taches_Precedentes;
public:
	 void setDebut()
	{

	}
	 void setFin()
	 {

	 }
	 void setDuree()
	 {

	 }
     void ajouterPr�c�dence(const Tache& t);
     void supprimerPr�c�dence(const string t);

};








#endif
