#ifndef SUBJEKT_H
#define SUBJEKT_H


#include <list>
#include <Beobachter.h>

class Subjekt
{
protected:
    std::list<Beobachter*> beobachterListe = std::list<Beobachter*>();
public:
    void registriere(Beobachter *beobachter)
    {
        beobachterListe.push_back(beobachter);
    }

    void deregistriere(Beobachter *beobachter)
    {
        beobachterListe.remove(beobachter);
    }
    void benachrichtigeAlleBeobachter(int);
};

#endif // SUBJEKT_H
