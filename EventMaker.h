#ifndef EVENTMAKER
#define EVENTMAKER

#include "timing.h"
#include "iostream"

#include "Event.h"
#include "Activite.h"
#include "Tache.h"
#include "Projet.h"

#include <QString>
#include <QDateTime>
#include <QTime>

using namespace std;
using namespace TIME;

/*!
\class EventMaker
\brief Classe pour implémentation du design pattern abstract factory
*/
class EventMaker {
public:
	enum TYPE_EVENT
	{
		PROJ,
		TACHE_S,
		TACHE_C,
		TACHE_P,
		ACTIV
	};
	virtual Event* getEvent();//<!construction du bon Event
	EventMaker* create(TYPE_EVENT factory);//<! creation de l'élément
};
/*!
\class Activite_F
\brief Création Activité
*/
class Activite_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new Activite();
	}
};
/*!
\class Projet_F
\brief Création Projet
*/
class Projet_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new Projet();
	}
};
/*!
\class TacheC_F
\brief Création Tache Composite
*/
class TacheC_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new TacheC();
	}
};
/*!
\class TacheP_F
\brief Création Tache Préemptée
*/
class TacheP_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new TacheP();
	}
};
/*!
\class TacheS_F
\brief Création Tache Simple
*/
class TacheS_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new TacheS();
	}
};


#endif
