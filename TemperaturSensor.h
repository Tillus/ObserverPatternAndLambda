#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include <algorithm>

#include <Subjekt.h>
#include <Beobachter.h>

class TemperaturSensor : public Subjekt
{
    int temperatur = 20;
public:

    void setTemperatur(int temp)
    {
        temperatur = temp;
    }

    void benachrichtigeAlleBeobachter()
    {
        for (Beobachter *beobachter : beobachterListe)
        {
            beobachter->aktualisiere(temperatur);
        }
    }
};

#endif // TEMPERATURSENSOR_H
