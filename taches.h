#ifndef TACHES
#define TACHES

#include "Tache.h"

class TacheS : public Tache
{
public:
    string getType()//<! redéfinition pour renvoyer le bon type
    {
        return "TacheC";
    }
};

#endif // TACHES

