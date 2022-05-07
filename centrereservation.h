#ifndef CENTRERESERVATION_H
#define CENTRERESERVATION_H
#include<string>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class centreReservation
{     string nomReservation;
      int nbrevoiture;
      int nbrechauffeur;
      int nbreemplacement;
      int nbrefonctionnaire;
public:
        centreReservation();
        virtual ~centreReservation();
        string getnomReservation(){return nomReservation;}
        friend istream& operator>> (istream&, centreReservation&);
        friend ostream& operator<<(ostream&, centreReservation&);
        int nbre_voitures(fstream&);
        int nbre_chauffeurs(fstream&);
        int nbre_emplacements(fstream&);
        int nbre_fonctionnaires(fstream&);
    protected:

};

#endif // CENTRERESERVATION_H
