#ifndef BEOBACHTER_H
#define BEOBACHTER_H

#include <iostream>

class Beobachter
{
protected:


public:
    virtual void aktualisiere(int temp) =0;
};

#endif // BEOBACHTER_H
