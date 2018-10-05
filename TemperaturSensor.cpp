#include "TemperaturSensor.h"

TemperaturSensor::TemperaturSensor()
{
}

void TemperaturSensor::benachrichtigeAlleBeobachter()
{
    for (Beobachter *beobachter : beobachterListe)
    {
        beobachter->aktualisiere(temperatur);
    }
}
