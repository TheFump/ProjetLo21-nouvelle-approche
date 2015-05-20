#ifndef PROJET
#define PROJET

#include "Tache.h"
#include "calendarexception.h"
#include <map>

using namespace std;
using namespace TIME;
/*!
\class Projet
\brief Classe utilisée pour regrouper des taches
*/
class Projet : public Event
{
protected :
	map<string, Tache*> taches;
public:
	string getType()//<! redéfinition pour renvoyer le bon type
	{
		return "Projet";
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
    void ajouterTache(Tache& t);//<! ajoute une tache au projet
    void supprimerTache(string t);//<! supprime une tache du projet
    void listerTaches();
    void tachesTerminee();
    void tachesEnCours();
};


#endif
