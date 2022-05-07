#ifndef VOITURE_H
#define VOITURE_H
#include"date.h"
#pragma once
#include<string>
#include<iomanip>
#include<fstream>
#include<iostream>
#include"emplacement.h"

using namespace std;
#pragma once
class emplacement;
class voiture
{
string marque;
string modele;
int matricule;
int IdentifiantChauffeur;
int dureePark;
public:
voiture(string ="", string="", int=0,int=0);
~voiture(void);
friend ostream& operator<< (ostream&, voiture&);
friend istream& operator>> (istream&, voiture&);
string getMarque(){return marque;}
string getModele(){return modele;}
int getMatricule(){return matricule;}
int getIdentifiantChauffeur(){return IdentifiantChauffeur;}
int getdureePark(){return(dureePark);}
int afficheEmplacement(fstream&);
static void creerfile(fstream&);
static void remplirv(fstream&);
static void afficherv(fstream&);
static void supprimerv(fstream&);
static void modifierv(fstream&);
};


#endif // VOITURE_H
