#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H
#include"date.h"
#include"voiture.h"
#include<fstream>
using namespace std;
class voiture;
#pragma once
class emplacement
{   int numEmplacement;
     int bloc;
     date dateEmplacement;
    public:
        emplacement(int,int ,date);
        virtual ~emplacement();
        int getnumEmplacement(){return numEmplacement;}
        int getBloc(){return bloc;}
        date getdateEmplacement(){return dateEmplacement;}
        static void creerfile(fstream&);
        static void remplire(fstream&);
        static void affichere(fstream&);
        static void supprimere(fstream&);
        static void recherchere(fstream&);
        static void modifiere(fstream&);
        void vecteur(fstream&);
    protected:

    private:
};

#endif // EMPLACEMENT_H
