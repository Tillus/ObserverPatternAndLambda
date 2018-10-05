#include <QCoreApplication>
#include <TemperaturSensor.h>
#include <TemperaturAnzeige.h>
#include <iostream>
#include <handover_functions.h>

#include <list>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TemperaturSensor * temperatursensor = new TemperaturSensor();
    TemperaturAnzeige * temperaturanzeige = new TemperaturAnzeige();

    temperatursensor->registriere(temperaturanzeige);
    temperatursensor->benachrichtigeAlleBeobachter();
    temperatursensor->setTemperatur(25);
    temperatursensor->benachrichtigeAlleBeobachter();






    std::getchar();
    return a.exec();
}
