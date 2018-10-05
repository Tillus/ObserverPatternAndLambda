#ifndef HANDOVER_FUNCTIONS_H
#define HANDOVER_FUNCTIONS_H

#include <iostream>
#include <functional>

//Beispielfunktion für Funktionszeiger
void printInt(int val)
{
    std::cout << "an integer called " << val << std::endl;
}

//Beispielfunktion/Struct für Functor
//sieht aus wie eine Funktion, es lassen sich darin jedoch zusätzlich Datenspeichern
//Nutzbarkeit, ohne Werte hardcoded zu hinterlegen
struct add_x {
    int x;
    add_x(int y):x(y){}
    int operator()(int y) const {return x + y;}
};


//Beispiel für LambdaExpression
//http://www.drdobbs.com/cpp/lambdas-in-c11/240168241
std::function<void()> greetWorld = {
        std::cout << "hello ";
        std::cout << "World! " << std::endl;
        };


void runExamples()
{
    //Anwendungsbeispiel Funktionszeiger
    void (*funcPtr)(int)= &printInt;
    funcPtr(30);

    //Anwendungsbeispiel Functor
    add_x add42(42);
    std::cout << add42(15) << std::endl;

    //Leichtes Beispiel LambdaAusdruck, LambdaAusdruck ist durch geschweifte Klammern erkenntlich
}



#endif // HANDOVER_FUNCTIONS_H
