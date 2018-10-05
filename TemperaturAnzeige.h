#ifndef TEMPERATURANZEIGE_H
#define TEMPERATURANZEIGE_H

#include <Beobachter.h>
#include <iostream>

class TemperaturAnzeige : public Beobachter
{
public:
    void aktualisiere(int temp)
    {
        std::cout << "Temperaturanzeige: " << temp << " °C." << std::endl;
    }

};

#endif // TEMPERATURANZEIGE_H
