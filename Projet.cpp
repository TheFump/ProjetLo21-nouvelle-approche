#include "Projet.h"

using namespace std; 
void Projet::ajouterTache(Tache& t)
{
    if (taches.find(t.getTitre()) != taches.end())
        taches[t.getTitre()] = &t;
    else
        throw CalendarException("Il existe déj�  une tache nommée ainsi !");
}

void Projet::supprimerTache(string t)
{
    if (taches.find(t) != taches.end())
        taches.erase(taches.find(t));
    else
        throw CalendarException("Il n'existe pas une tache nommée ainsi !");
}
void listerTaches()
{

}

