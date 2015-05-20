#ifndef TACHEC
#define TACHEC

#include "Tache.h"

class TacheC : public Tache
{
public:
    string getType()//<! redéfinition pour renvoyer le bon type
    {
        return "TacheC";
    }
};
#endif // TACHEC

