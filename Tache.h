#ifndef TACHE
#define TACHE

#include "Event.h"

using namespace std;
using namespace TIME;
/*!
\class Tache
\brief Classe Abstraite mère des différentes taches
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
     void ajouterPrécédence(const Tache& t);
     void supprimerPrécédence(const string t);

};








#endif
