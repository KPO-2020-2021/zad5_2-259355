#pragma once

#include "Prostopadl.hh"
#include "Block.hh"
#include "Vector3.hh"
#include <iomanip>


/**
 * \brief Klasa Drona
 * 
 * Klasa pozwalajaca operowac na dronie 
 * Klasa dziedziczy po klasie Block oraz Prostopadl
 * 
 */
class Drone: public Block, public Prostopadl
{

    private:

    Block *rotor[4]; /**< 4 rotory */

    Prostopadl *corp; /**< Korpus Drona */

    public:

    Drone (){};

    Vector3 position[2];    /**< Wektor przetrzymujacy wspolrzedne poczatku lotu i konca*/

    void Init(const char *NamesFilesLocal[], int step);   /**< Funkcja inicjujaca poczatkowego drona */

    void Engage2(double angle, Vector3 position, const char *NamesFilesLocal[], const char *NamesFilesProper[], int step); /**< Funkcja wykonujaca operacje na dronie obraca, inicjuje i transponuje */

    // void Relocate(Vector3 begin_position,double drone_num, double angle, double lenght_of_path, PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[], const char *NamesFilesProper[]);    /**< Funkcja wykonujaca animacje lotu drona */

    void Relocate(unsigned int number, double angle, double lenght_of_path, PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[], const char *NamesFilesProper[]);

    void Scouting(double angle, PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[], const char *NamesFilesProper[]);

    void GoForward(double angletemp, double lenght_of_path,PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[],const char *NamesFilesProper[]);

    void Orientation(double angle, double angletemp, PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[], const char *NamesFilesProper[]);

    void GoDownAndUp(double up_down,double angletemp, PzG::LaczeDoGNUPlota &Lacze, const char *NamesFilesLocal[],const char *NamesFilesProper[]);


};