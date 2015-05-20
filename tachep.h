#ifndef TACHEP
#define TACHEP

#include "Tache.h"

class TacheP : public TacheS
{
public:
    string getType()//<! redéfinition pour renvoyer le bon type
    {
        return "TacheC";
    }
};

#endif // TACHEP

