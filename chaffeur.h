#ifndef CHAFFEUR_H
#define CHAFFEUR_H
#include"date.h"
#include<fstream>
#include<iostream>
#include<vector>
using namespace std;
class chaffeur
{
protected:
   int identifiantChauffeur;
   string nomChauffeur;
   float dureeTravail;
   int anneexperience;
    public:
        chaffeur(int ,string ,float ,int );
        friend istream& operator>> (istream&, chaffeur&);
        friend ostream& operator<<(ostream&, chaffeur&);
        virtual ~chaffeur();
        int getidentifiantChauffeur(){return identifiantChauffeur;}
        int getexperience(){return anneexperience;}
        float getdureeTravail(){return dureeTravail;}
        string getNomChauffeur(){return nomChauffeur;}
        ostream& travailler(ostream&,date);
        bool disponible(date);
        void modifierc(fstream&);
        static void creerfile(fstream&);
        static void remplirc(fstream&);
        static void afficherc(fstream&);
        static void supprimerc(fstream&);

    private:
};

#endif // CHAFFEUR_H
