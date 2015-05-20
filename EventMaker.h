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
\brief Classe pour impl�mentation du design pattern abstract factory
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
	EventMaker* create(TYPE_EVENT factory);//<! creation de l'�l�ment
};
/*!
\class Activite_F
\brief Cr�ation Activit�
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
\brief Cr�ation Projet
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
\brief Cr�ation Tache Composite
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
\brief Cr�ation Tache Pr�empt�e
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
\brief Cr�ation Tache Simple
*/
class TacheS_F : public EventMaker {
public:
	Event* getEvent()
	{
		return new TacheS();
	}
};


#endif
