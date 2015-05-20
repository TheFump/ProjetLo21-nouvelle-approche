#ifndef EVENT
#define EVENT
#include "timing.h"
#include "iostream"
#include <QString>
#include <QDateTime>
#include <QTime>
using namespace std;
using namespace TIME;

/*! 
\class Event
		\brief Classe Abstraite mère des éléments de l'agenda
	*/
class Event {
private:
    QString titre;
    QDateTime debut;
    QDateTime fin;
    QTime duree;

public:
	virtual string getType() = 0;//<! retourne le type d'evennement
	string getTitre() const//<! retourne le titre
	{
		return titre;
	}
	Date getDebut() const//<! retourne la date de début
	{
		return debut;
	}
	Date getFin() const//<! retourne l'échéance
	{
		return fin;
	}
	Duree getDuree() const//<! retourne la durée
	{
		return duree;
	}
	virtual void setTitre()//<! permet de mettre a jour le titre;
	{

	}
	virtual void setDebut() = 0;//<! permet de mettre a jour la date de début;
	virtual void setFin() = 0;//<! permet de mettre a jour la date de fin;
	virtual void setDuree() = 0;//<! permet de mettre a jour la duree du projet;

};

#endif
