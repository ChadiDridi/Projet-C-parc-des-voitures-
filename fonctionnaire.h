
#ifndef FONCTIONNAIRE_H
#define FONCTIONNAIRE_H
#include<iostream>
#include "chaffeur.h"
#include<fstream>
class chaffeur;
class fonctionnaire : public chaffeur
{
    bool  testchauffeur;

    public:
        fonctionnaire();
        fonctionnaire(int,string,float,int,bool);
        virtual ~fonctionnaire();

        friend istream& operator>> (istream&, fonctionnaire&);
        friend ostream& operator<<(ostream&, fonctionnaire&);
        static void creerfilefonc(fstream&);
        static void remplirfonc(fstream&);
        static void afficherfonc(fstream&);
        static void supprimerfonc(fstream&);
        static void modifierf(fstream&);
        static void rechercherfonc(fstream&);
    protected:

    private:
};

#endif // FONCTIONNAIRE_H

