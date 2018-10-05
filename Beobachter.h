#ifndef BEOBACHTER_H
#define BEOBACHTER_H

#include <iostream>

class Beobachter
{
public:
    virtual void aktualisiere(int temp) =0;
};

#endif // BEOBACHTER_H
