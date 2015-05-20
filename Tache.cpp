#include "Tache.h"

void Tache::ajouterPr�c�dence(const Tache &t)
{
    if (taches_Precedentes.find(t.getTitre()) == taches.end())
        taches_Precedentes[t.getTitre()] = &t;
    else
        throw CalendarException("Il existe déj�  une tache nommée ainsi !");
}

void Tache::supprimerPr�c�dence(const string t)
{
    if (taches_Precedentes.find(t) != taches.end())
        taches_Precedentes.erase(taches.find(t));
    else
        throw CalendarException("Il n'existe pas une tache nommée ainsi !");
}



