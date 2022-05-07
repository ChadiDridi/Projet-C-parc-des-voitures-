#include "voiture.h"
#pragma once
voiture::voiture(string ma, string mo, int p,int q)
{
marque=ma;
modele=mo;
matricule=p;
IdentifiantChauffeur=q;
}
voiture::~voiture(void)
{
}
ostream& operator<< (ostream& out, voiture& v)
{
out<<v.matricule<<" "<<setw(10)<<v.modele<<" "<<setw(10)<<v.marque<<setw(10)<<v.IdentifiantChauffeur;
return out;
}
istream& operator>> (istream& in, voiture& v)
{ cout<<"donner matricule , marque , modele , identifiant chauffeur";
in>>v.matricule;
in>>v.marque;
in>>v.modele;
in>>v.IdentifiantChauffeur;
return in;
}
void voiture::creerfile(fstream& f){
    f.open("voiture.txt",ios::in | ios::out | ios::app);
    if (!f) exit(-1);
}
void voiture::remplirv(fstream& f){
 voiture a;
 int n;
 cout<<"donner nombres de voitures à entrer"<<endl;
 cin>>n;
 for (int i=0;i<n;i++){
    cin>>a;
    f<<a<<endl;
 }
}
void voiture::afficherv(fstream& f){
 voiture a;
 f.seekg(0);
 while (1)
 {
     f>>a;
     if(f.eof()) break;
     cout<<a<<endl;
 }
 }
 void voiture::supprimerv(fstream& f)
 {
     string deleteline;
      string line;
      ifstream fin;
f.open("voiture.txt");
ofstream temp;
temp.open("car.txt");
cout << "ecrire la matricule de la voiture en 2 nombres ";
cin >> deleteline;
while (getline(f,line))
{
    if (line.substr(0,2) != deleteline)
    {
    temp << line << endl;
    }
}

temp.close();
f.close();
remove("voiture.txt");
rename("car.txt","voiture.txt");
 }
 int voiture::afficheEmplacement(fstream& f)
 {
     int a,k,i;
     i=0;

      string line,ch;
      cout<<"donner la matricule de voiture a afficher"<<endl;
      cin>>ch;
       f.open("emplacement.txt");
while (getline(f,line))
{

     if ((line.substr(0,2)) != ch.substr(0,2))
          i++;
       else
       {
           if (line.substr(0,2) == ch.substr(0,2))
             {return (i);}
           else
                return (-1);
        }
}
f.close(); }
void voiture::modifierv(fstream& f)
 {   string line;
     f.open("voiture.txt");
      ofstream temp;
     temp.open("modif.txt");
     cout<<"donner matricule";
     string name;
     cin>>name;
     if(f.fail())
{
     cout<<"File is empty.\n";
}
while ((getline(f,line)))
{
    voiture c("","",0,0);
    if (line.substr(0,2) != name)
    {
    temp << line << endl;
    }
    else
        cout<<"donner nouveaux valeurs";
        cin>>c;
        temp<<c;

{
       f>> name;
}
temp.close();
f.close();
remove("voiture.txt");
rename("modif.txt","voiture.txt");

 }
 }



