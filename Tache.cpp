#include "Tache.h"

void Tache::ajouterPrécédence(const Tache &t)
{
    if (taches_Precedentes.find(t.getTitre()) == taches.end())
        taches_Precedentes[t.getTitre()] = &t;
    else
        throw CalendarException("Il existe dÃ©jÃ  une tache nommÃ©e ainsi !");
}

void Tache::supprimerPrécédence(const string t)
{
    if (taches_Precedentes.find(t) != taches.end())
        taches_Precedentes.erase(taches.find(t));
    else
        throw CalendarException("Il n'existe pas une tache nommÃ©e ainsi !");
}



